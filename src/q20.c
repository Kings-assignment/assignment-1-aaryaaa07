// Write an expression that checks if a number is a multiple of either 3 or 5.
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 3 == 0 || n % 5 == 0) {
        printf("%d is a multiple of 3 or 5.\n", n);
    } else {
        printf("%d is NOT a multiple of 3 or 5.\n", n);
    }

    return 0;
}