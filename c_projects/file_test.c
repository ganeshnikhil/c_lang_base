#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void split(const char* input, char delimiter, char tokens[][100], int* count) {
    *count = 0;

    char temp[100];
    int tempIndex = 0;

    for (int i = 0; i < strlen(input); i++) {
        if (input[i] == delimiter) {
            temp[tempIndex] = '\0'; // Null-terminate the substring
            strcpy(tokens[*count], temp);
            (*count)++;

            tempIndex = 0; // Reset the index for the next substring
        } else {
            temp[tempIndex] = input[i];
            tempIndex++;
        }
    }

    temp[tempIndex] = '\0'; // Null-terminate the last substring
    strcpy(tokens[*count], temp);
    (*count)++;
}

int main() {
    printf("Input Selection:\n");
    printf("1. Option 1 - create account\n");
    printf("2. Option 2 - all account list\n");
    printf("3. Option 3 - delete account\n");
    printf("4. Option 4 - check amount\n");
    printf("5. Option 5 - deposit money\n");
    printf("6. Option 6 - withdraw money\n");
    printf("7. Exit\n");

    char choiceInput[100];
    int choice;
    FILE* fptr;
    char data[100];
    char line[100];

    printf("Enter your choice: ");
    fgets(choiceInput, sizeof(choiceInput), stdin);
    sscanf(choiceInput, "%d", &choice);

    switch (choice) {
        case 1:
            fptr = fopen("program.txt", "a");
            if (fptr != NULL) {
                printf("Enter name and amount: ");
                fgets(data, sizeof(data), stdin);
                if (data[0] == '\n') {
                    memmove(data, data + 1, strlen(data));
                }
                fprintf(fptr, "%s", data); // Append data without extra leading whitespace
                fclose(fptr);
            } 
            else {
                printf("Failed to open the file.\n");
            }
            break;

        case 2:
            fptr = fopen("program.txt", "r");
            if (fptr != NULL) {
                while (fgets(line, sizeof(line), fptr) != NULL) {
                    printf("%s", line);
                }
                fclose(fptr);
            } else {
                printf("Failed to open the file.\n");
            }
            break;

        case 3:
            fptr = fopen("program.txt", "r");
            if (fptr != NULL) {
                char name[100];
                printf("Enter the name to delete: ");
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = '\0'; // Remove the newline character from the name input

                char delimiter = ':';
                char tokens[10][100];
                int count = 0;

                FILE* tempFile = fopen("temp.txt", "w");
                if (tempFile != NULL) {
                    while (fgets(line, sizeof(line), fptr) != NULL) {
                        split(line, delimiter, tokens, &count);
                        if (strcmp(name, tokens[0]) != 0) {
                            fprintf(tempFile, "%s", line);
                        }
                    }
                    fclose(tempFile);
                    fclose(fptr);

                    remove("program.txt");
                    rename("temp.txt", "program.txt");
                } else {
                    printf("Failed to create temporary file.\n");
                }
            } else {
                printf("Failed to open the file.\n");
            }
            break;

        case 4:
            fptr = fopen("program.txt", "r");
            if (fptr != NULL) {
                char name[100];
                printf("Enter your name: ");
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = '\0'; // Remove the newline character from the name input

                char delimiter = ':';
                char tokens[10][100];
                int count = 0;

                int found = 0;

                while (fgets(line, sizeof(line), fptr) != NULL) {
                    split(line, delimiter, tokens, &count);
                    if (strcmp(name, tokens[0]) == 0) {
                        printf("Amount: %s\n", tokens[1]);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Name not found!\n");
                }

                fclose(fptr);
            } else {
                printf("File not found!\n");
            }
            break;

        case 5:
            fptr = fopen("program.txt", "r");
            if (fptr != NULL) {
                char name[100];
                char amount[100];
                printf("Enter your name: ");
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = '\0'; // Remove the newline character from the name input

                printf("Enter the amount to deposit: ");
                fgets(amount, sizeof(amount), stdin);
                amount[strcspn(amount, "\n")] = '\0'; // Remove the newline character from the amount input

                char delimiter = ':';
                char tokens[10][100];
                int count = 0;

                int found = 0;

                FILE* tempFile = fopen("temp.txt", "w");
                if (tempFile != NULL) {
                    while (fgets(line, sizeof(line), fptr) != NULL) {
                        split(line, delimiter, tokens, &count);
                        if (strcmp(name, tokens[0]) == 0) {
                            int currentAmount = atoi(tokens[1]);
                            int depositAmount = atoi(amount);
                            currentAmount += depositAmount;
                            fprintf(tempFile, "%s:%d\n", name, currentAmount);
                            found = 1;
                        } else {
                            fprintf(tempFile, "%s", line);
                        }
                    }
                    fclose(tempFile);
                    fclose(fptr);

                    remove("program.txt");
                    rename("temp.txt", "program.txt");
                } else {
                    printf("Failed to create temporary file.\n");
                }

                if (!found) {
                    printf("Name not found!\n");
                }
            } else {
                printf("Failed to open the file.\n");
            }
            break;

        case 6:
            fptr = fopen("program.txt", "r");
            if (fptr != NULL) {
                char name[100];
                char amount[100];
                printf("Enter your name: ");
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = '\0'; // Remove the newline character from the name input

                printf("Enter the amount to withdraw: ");
                fgets(amount, sizeof(amount), stdin);
                amount[strcspn(amount, "\n")] = '\0'; // Remove the newline character from the amount input

                char delimiter = ':';
                char tokens[10][100];
                int count = 0;

                int found = 0;

                FILE* tempFile = fopen("temp.txt", "w");
                if (tempFile != NULL) {
                    while (fgets(line, sizeof(line), fptr) != NULL) {
                        split(line, delimiter, tokens, &count);
                        if (strcmp(name, tokens[0]) == 0) {
                            int currentAmount = atoi(tokens[1]);
                            int withdrawalAmount = atoi(amount);

                            if (withdrawalAmount <= currentAmount) {
                                currentAmount -= withdrawalAmount;
                                fprintf(tempFile, "%s:%d\n", name, currentAmount);
                                found = 1;
                            } else {
                                printf("Insufficient balance. Cannot withdraw.\n");
                                fprintf(tempFile, "%s:%s", name, tokens[1]);
                                found = 1;
                            }
                        } else {
                            fprintf(tempFile, "%s", line);
                        }
                    }
                    fclose(tempFile);
                    fclose(fptr);

                    remove("program.txt");
                    rename("temp.txt", "program.txt");
                } else {
                    printf("Failed to create temporary file.\n");
                }

                if (!found) {
                    printf("Name not found!\n");
                }
            } else {
                printf("Failed to open the file.\n");
            }
            break;

        case 7:
            printf("Exiting the program.\n");
            break;

        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
