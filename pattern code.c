#include <stdio.h>

int main() {
    int rows = 4;
    int columns = 5;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
