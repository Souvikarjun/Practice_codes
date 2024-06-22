#include <stdio.h>

// Function to calculate the factorial using a pointer
void calculateFactorial(int num, unsigned long long *result) {
    *result = 1;

    // Calculate factorial using the pointer
    for (int i = 1; i <= num; i++) {
        *result *= i;
    }
}

int main() {
    // Declare variables
    int num;
    unsigned long long factorial = 1;

    // Input a number
    printf("Input a number: ");
    scanf("%d", &num);

    // Calculate the factorial using a pointer
    calculateFactorial(num, &factorial);

    // Print the result
    printf("The Factorial of %d is : %llu\n", num, factorial);

    return 0;
}
