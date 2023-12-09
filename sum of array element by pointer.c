#include <stdio.h>

int findSum(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int result = findSum(numbers, sizeof(numbers) / sizeof(numbers[0]));
    printf("Sum of elements: %d\n", result);
    return 0;
}
