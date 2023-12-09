#include <stdio.h>

int stringCompare(char *str1, char *str2) {
    while (*str1 == *str2) {
        if (*str1 == '\0')
            return 0; // Strings are equal
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    int result = stringCompare(str1, str2);
    if (result == 0)
        printf("Strings are equal\n");
    else if (result < 0)
        printf("String 1 is smaller\n");
    else
        printf("String 1 is larger\n");
    return 0;
}
