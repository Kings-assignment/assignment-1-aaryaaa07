// Write a C expression that evaluates whether a number is divisible by both 2 and 3 (without using the modulus operator).
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n / 2 * 2 == n && n / 3 * 3 == n) {
        printf("%d is divisible by both 2 and 3\n", n);
    } else {
        printf("%d is NOT divisible by both 2 and 3\n", n);
    }

    return 0;
}