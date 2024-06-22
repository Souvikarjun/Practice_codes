#include <stdio.h>

// Function to add two numbers using call by reference
void addNumbers(int *a, int *b, int *sum) {
    *sum = *a + *b;
}

int main() {
    // Declare variables
    int num1, num2, sum;

    // Input the first number
    printf("Input the first number: ");
    scanf("%d", &num1);

    // Input the second number
    printf("Input the second number: ");
    scanf("%d", &num2);

    // Call the function to add numbers using call by reference
    addNumbers(&num1, &num2, &sum);

    // Print the result
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}
