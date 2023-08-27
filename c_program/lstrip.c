#include <stdio.h>
#include <string.h>
#include <ctype.h>

void lstrip(char *str) {
    int i, j;
    int len = strlen(str);

    // Find the index of the first non-whitespace character
    for (i = 0; i < len && isspace((unsigned char)str[i]); i++) {}

    // Shift the remaining characters to the beginning of the string
    for (j = 0; i < len; i++, j++) {
        str[j] = str[i];
    }

    // Add null character at the end to terminate the trimmed string
    str[j] = '\0';
}

int main() {
    char str[] = "     Hello, World!";
    printf("Before: '%s'\n", str);
    lstrip(str);
    printf("After: '%s'\n", str);

    return 0;
}
