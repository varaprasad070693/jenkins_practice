#include <stdio.h>

int main() {
    int num;
    long long factorial = 1;

    // Take input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate the factorial
        for (int i = 1; i <= num; ++i) {
            factorial *= i; // factorial = factorial * i
        }

        // Display the result
        printf("Factorial of %d = %lld\n", num, factorial);
    }

    return 0;
}

