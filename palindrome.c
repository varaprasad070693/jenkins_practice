#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder, originalNum;

    // Take input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number to compare later
    originalNum = num;

    // Reverse the given number
    while (num != 0) {
        remainder = num % 10;  // Get the last digit
        reversedNum = reversedNum * 10 + remainder;  // Build the reversed number
        num /= 10;  // Remove the last digit
    }

    // Check if the number is a palindrome
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}

