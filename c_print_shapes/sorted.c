#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Comparison function for qsort()
int compareStrings(const void *a, const void *b) {
    const char **str1 = (const char **)a;
    const char **str2 = (const char **)b;

    return strcmp(*str1, *str2);
}

int main() {
    char strings[][100] = {"apple", "orange", "banana", "grape"};

    int numStrings = sizeof(strings) / sizeof(strings[0]);

    qsort(strings, numStrings, sizeof(strings[0]), compareStrings);

    printf("Sorted strings:\n");
    for (int i = 0; i < numStrings; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
