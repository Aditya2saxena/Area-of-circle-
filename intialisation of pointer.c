#include <stdio.h>

int main() {
    // Declare and initialize variables
    int number = 42;
    double pi = 3.14;

    // Declare and initialize pointers
    int *intPointer = &number;
    double *doublePointer = &pi;

    // Use pointers to access and modify values
    printf("Value of integer variable: %d\n", *intPointer);
    printf("Value of double variable: %.2f\n", *doublePointer);

    // Modify values through pointers
    *intPointer = 99;
    *doublePointer = 2.718;

    // Print modified values
    printf("Modified value of integer variable: %d\n", *intPointer);
    printf("Modified value of double variable: %.2f\n", *doublePointer);

    return 0;
}
