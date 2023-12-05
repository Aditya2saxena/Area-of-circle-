#include <stdio.h>

int main() {
    char choice;
    float area, base, height, radius;

    printf("Choose a shape (R for Rectangle, C for Circle, T for Triangle): ");
    scanf(" %c", &choice);

    switch (choice) {
        case 'R':
        case 'r':
            printf("Enter length and width of rectangle: ");
            scanf("%f %f", &base, &height);
            area = base * height;
            break;
        case 'C':
        case 'c':
            printf("Enter radius of circle: ");
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            break;
        case 'T':
        case 't':
            printf("Enter base and height of triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            break;
        default:
            printf("Invalid choice.\n");
            return 1;
    }

    printf("Area: %.2f\n", area);

    return 0;
}
