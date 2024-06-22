#include <stdio.h>

// Function to find the maximum number using a pointer
int findMax(int *a, int *b) {
    return (*a > *b) ? *a : *b;
}

int main() {
    // Declare variables
    int num1, num2;

    // Input the first number
    printf("Input the first number: ");
    scanf("%d", &num1);

    // Input the second number
    printf("Input the second number: ");
    scanf("%d", &num2);

    // Find the maximum number using a pointer
    int maxNumber = findMax(&num1, &num2);

    // Print the result
    printf("%d is the maximum number.\n", maxNumber);

    return 0;
}
