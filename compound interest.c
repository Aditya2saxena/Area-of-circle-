#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compound_interest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    compound_interest = principal * pow(1 + rate/100, time) - principal;

    printf("Compound Interest: %.2f\n", compound_interest);

    return 0;
}
