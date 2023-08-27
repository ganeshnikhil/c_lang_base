#include <stdio.h>
#include <string.h>

void split(const char *str, const char *delimiter, char result[][100], int *num_tokens) {
    char *token;
    char temp[100];

    strcpy(temp, str);  // Make a copy of the original string

    *num_tokens = 0;  // Initialize the number of tokens

    // Split the string into tokens using the delimiter
    token = strtok(temp, delimiter);
    while (token != NULL) {
        strcpy(result[*num_tokens], token);
        (*num_tokens)++;
        token = strtok(NULL, delimiter);
    }
}

int main() {
    const char str[] = "Hello,World,How,Are,You";
    const char delimiter[] = ",";
    char result[10][100];
    int num_tokens;

    split(str, delimiter, result, &num_tokens);

    printf("Original string: %s\n", str);
    printf("Number of tokens: %d\n", num_tokens);
    printf("Tokens:\n");
    for (int i = 0; i < num_tokens; i++) {
        printf("%s\n", result[i]);
    }

    return 0;
}
