#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum, remainder, result = 0, n = 0;

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    return result == num;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Armstrong numbers between 1 and %d are:\n", n);
    for (int i = 1; i <= n; ++i) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }

    int numToCheck;
    printf("Enter a number to check if it's Armstrong: ");
    scanf("%d", &numToCheck);

    if (isArmstrong(numToCheck)) {
        printf("%d is an Armstrong number.\n", numToCheck);
    } else {
        printf("%d is not an Armstrong number.\n", numToCheck);
    }

    return 0;
}
