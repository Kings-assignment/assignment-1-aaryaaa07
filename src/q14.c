// Create an expression that swaps the values of two variables x and y without using a temporary variable.
#include <stdio.h>

int main() {
    int x, y;

    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter value of y: ");
    scanf("%d", &y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("After swapping:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}