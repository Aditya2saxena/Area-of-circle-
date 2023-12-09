#include <stdio.h>

void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call function to swap numbers
    swapNumbers(&num1, &num2);

    printf("Swapped numbers: %d, %d\n", num1, num2);

    return 0;
}
