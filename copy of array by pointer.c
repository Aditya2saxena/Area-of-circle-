#include <stdio.h>

void copyArray(int *source, int *destination, int size) {
    for (int i = 0; i < size; i++) {
        *(destination + i) = *(source + i);
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int sourceArray[size], destinationArray[size];

    // Input source array elements using pointer
    printf("Enter elements of the source array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &*(sourceArray + i));
    }

    // Copy array using pointer
    copyArray(sourceArray, destinationArray, size);

    // Print destination array elements using pointer
    printf("Copied array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(destinationArray + i));
    }

    return 0;
}
