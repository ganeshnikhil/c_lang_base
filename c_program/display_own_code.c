#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    file = fopen(__FILE__, "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);

    return 0;
}
