#include <stdio.h>

int findLargest(int *ptr1, int *ptr2, int *ptr3) {
    int largest = *ptr1;
    if (*ptr2 > largest) {
        largest = *ptr2;
    }
    if (*ptr3 > largest) {
        largest = *ptr3;
    }
    return largest;
}

int main() {
    int num1 = 25, num2 = 40, num3 = 30;
    int result = findLargest(&num1, &num2, &num3);
    printf("Largest number: %d\n", result);
    return 0;
}
