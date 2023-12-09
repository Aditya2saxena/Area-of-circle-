#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    // Input array elements using pointer
    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &*(array + i));
    }

    // Print array elements using pointer
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(array + i));
    }

    return 0;
}
