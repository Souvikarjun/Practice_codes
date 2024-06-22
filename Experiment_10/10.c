#include <stdio.h>

// Function to calculate factorial using recursion
unsigned long long fact(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * fact(n - 1);
    }
}

int main() {
    int num;

    // Input the number for which factorial should be calculated
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    // Calculate and print the factorial
    unsigned long long result = fact(num);
    printf("Factorial of %d = %llu\n", num, result);

    return 0;
}
