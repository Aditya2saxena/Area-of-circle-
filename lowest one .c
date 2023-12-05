#include <stdio.h>

int main() {
    int marks1, marks2, marks3, lowest;

    printf("Enter marks of student 1: ");
    scanf("%d", &marks1);

    printf("Enter marks of student 2: ");
    scanf("%d", &marks2);

    printf("Enter marks of student 3: ");
    scanf("%d", &marks3);

    lowest = (marks1 < marks2) ? ((marks1 < marks3) ? marks1 : marks3) : ((marks2 < marks3) ? marks2 : marks3);

    printf("Lowest marks: %d\n", lowest);

    return 0;
}

