#include <stdio.h>
#include <string.h>
#include <ctype.h>

void rstrip(char *str) {
    int i;
    int len = strlen(str);

    // Find the index of the last non-whitespace character
    for (i = len - 1; i >= 0 && isspace((unsigned char)str[i]); i--) {}

    // Add null character after the last non-whitespace character
    str[i + 1] = '\0';
}

int main() {
    char str[] = "Hello, World!     ";
    printf("Before: '%s'\n", str);
    rstrip(str);
    printf("After: '%s'\n", str);

    return 0;
}
