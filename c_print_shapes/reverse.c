#include <stdio.h>
#include <string.h>

void reverse(char *str) {
    int len = strlen(str);
    int i, j;

    // Swap characters from start and end until they meet in the middle
    for (i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[] = "Hello, World!";
    printf("Before: '%s'\n", str);
    reverse(str);
    printf("After: '%s'\n", str);

    return 0;
}
