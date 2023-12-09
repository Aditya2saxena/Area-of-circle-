#include <stdio.h>

float calculateSimpleInterest(float *principal, float *rate, int *time) {
    return (*principal * *rate * *time) / 100;
}

int main() {
    float principal = 1000.0, rate = 5.0;
    int time = 2;
    float interest = calculateSimpleInterest(&principal, &rate, &time);
    printf("Simple Interest: %.2f\n", interest);
    return 0;
}
