#include <stdio.h>

int main() {
    int num1 = 5, num2 = 7, sum;
    int *ptr1 = &num1, *ptr2 = &num2;

    // Add numbers using pointers
    sum = *ptr1 + *ptr2;

    printf("Sum: %d\n", sum);

    return 0;
}
