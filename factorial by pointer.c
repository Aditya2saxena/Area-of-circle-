#include <stdio.h>

long long factorial(int *num) {
    long long result = 1;
    for (int i = 1; i <= *num; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n = 5;
    long long result = factorial(&n);
    printf("Factorial of %d: %lld\n", n, result);
    return 0;
}
