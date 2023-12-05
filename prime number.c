#include <stdio.h>

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);
    for (int i = 2; i <= n; ++i) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
