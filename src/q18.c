// Write a C expression that calculates the sum of the squares of three different numbers.
#include <stdio.h>

int main() {
    int a, b, c, sum_of_squares;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    sum_of_squares = (a * a) + (b * b) + (c * c);

    printf("The sum of the squares of %d, %d, and %d is %d\n", a, b, c, sum_of_squares);

    return 0;
}