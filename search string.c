#include <stdio.h>
#include <string.h>

int searchString(char *text, char *pattern) {
    char *ptr = strstr(text, pattern);
    if (ptr != NULL) {
        return ptr - text;
    } else {
        return -1;
    }
}

int main() {
    char text[] = "This is a sample text.";
    char pattern[] = "sample";
    int result = searchString(text, pattern);
    if (result != -1) {
        printf("Pattern found at index: %d\n", result);
    } else {
        printf("Pattern not found.\n");
    }
    return 0;
}
