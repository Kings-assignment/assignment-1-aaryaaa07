// Create an expression that checks if a given number is a perfect square.
// You can you math header file for this (eg: #include <math.h>)
#include <stdio.h>
#include <math.h>

int main() {
    int num;
    int root;
    int result;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        result = 0; 
    } else {
        root = (int)sqrt(num);        
        result = (root * root == num); 
    }

    printf("The result is %d\n", result); 

    return 0;
}