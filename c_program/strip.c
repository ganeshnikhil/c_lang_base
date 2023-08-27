#include <stdio.h>
#include <string.h>
#include <ctype.h>

void strip(char *str) {
    // Remove leading whitespace
    char *start = str;
    while (*start && isspace((unsigned char)*start)) {
        start++;
    }

    // Remove trailing whitespace
    char *end = str + strlen(str) - 1;
    while (end > start && isspace((unsigned char)*end)) {
        end--;
    }

    // Move the non-whitespace characters to the beginning of the string
    memmove(str, start, end - start + 1);
    str[end - start + 1] = '\0';
}

int main() {
    char str[] = "   Hello, World!   ";
    printf("Before: '%s'\n", str);
    strip(str);
    printf("After: '%s'\n", str);

    return 0;
}
