#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    int length, i, j;

    // Input the string
    printf("Enter a string: ");
    gets(str);  // Use gets() to take input (be cautious with this function)

    // Find the length of the string
    length = strlen(str);

    // Reverse the string
    j = 0;
    for (i = length - 1; i >= 0; i--) {
        reversed[j++] = str[i];
    }
    reversed[j] = '\0';  // Null-terminate the reversed string

    // Output the reversed string
    printf("Reversed string: %s\n", reversed);

