// Write an expression that checks if a number is both positive and even.
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0 && n % 2 == 0) {
        printf("%d is positive and even.\n", n);
    } else {
        printf("%d is NOT positive and even.\n", n);
    }

    return 0;
}