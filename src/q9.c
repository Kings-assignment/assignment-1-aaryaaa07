// Input a number representing days and print the equivalent number of weeks and days.
// Example: 
// Input = 10
// Output = "1 week and 3 days"
#include <stdio.h>

int main() {
    int days, weeks, remaining_days;

    scanf("%d", &days);

    weeks = days / 7;
    remaining_days = days % 7;

    printf("%d week and %d days\n", weeks, remaining_days);

    return 0;
}