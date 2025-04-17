#include <stdio.h>

void big3() {
    int num1, num2, num3;

    // Take input for three numbers
    printf("Biggest of 3 numbers\nEnter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the largest number
    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is: %d\n", num2);
    } else {
        printf("The largest number is: %d\n", num3);
    }

}

