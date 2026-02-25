// Create an expression that swaps the values of three variables x, y, and z in a cyclic order (i.e., x becomes y, y becomes z, and z becomes x).
#include <stdio.h>

int main() {
    int x, y, z, temp;

    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter value of y: ");
    scanf("%d", &y);

    printf("Enter value of z: ");
    scanf("%d", &z);

    temp = x;
    x = y;
    y = z;
    z = temp;

    printf("After cyclic swap:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);

    return 0;
}