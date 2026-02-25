// Write a C expression that calculates the square root of the sum of two numbers, rounded to the nearest integer.
// You can you math header file for this (eg: #include <math.h>)
#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    int result;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    result = round(sqrt(x + y));  // Square root of sum, rounded
    printf("The result is %d\n", result);

    return 0;
}
