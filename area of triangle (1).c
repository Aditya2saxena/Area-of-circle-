
#include <stdio.h>

int main() {
    float height, base, area;

    printf("Enter height of triangle: ");
    scanf("%f", &height);

    printf("Enter base of triangle: ");
    scanf("%f", &base);

    area = (height * base) / 2;

    printf("Area of triangle: %.2f\n", area);

    return 0;
}
