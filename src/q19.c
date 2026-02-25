// Given three variables a, b, and c, write an expression that checks if a is equal to b and b is not equal to c.
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Enter value of c: ");
    scanf("%d", &c);

    if (a == b && b != c) {
        printf("Condition satisfied: a is equal to b and b is not equal to c.\n");
    } else {
        printf("Condition NOT satisfied.\n");
    }

    return 0;
}