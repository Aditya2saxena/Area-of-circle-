#include <stdio.h>

int main() {
    int a = 5, b = 10;

    printf("Before interchange: a = %d, b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After interchange: a = %d, b = %d\n", a, b);

    return 0;
}
