#include <stdio.h>
#include <string.h>

void bubbleSort(char arr[][100], int n) {
    int i, j;
    char temp[100];

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    int n, i;
    char strings[100][100];

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    printf("Enter the strings:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", strings[i]);
    }

    bubbleSort(strings, n);

    printf("\nStrings in lexicographical order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
