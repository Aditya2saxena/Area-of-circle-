#include <stdio.h>

int findHCF(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }

    return a;
}

int findLCM(int a, int b) {
    return (a * b) / findHCF(a, b);
}

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("HCF(GCD) of %d and %d: %d\n", num1, num2, findHCF(num1, num2));
    printf("LCM of %d and %d: %d\n", num1, num2, findLCM(num1, num2));

    return 0;
}
