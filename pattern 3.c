#include <stdio.h>

int main() {
    int rows = 4;

    for (int i = 1; i <= rows; i++) {
        for (int j = 5; j >= 6 - i; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
