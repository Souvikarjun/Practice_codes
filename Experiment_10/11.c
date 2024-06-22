#include<stdio.h>


// Function to calculate the sum of numbers from 1 to n using recursion
int sum(int n) {
    // Base case: sum of 0 is 0
    if (n == 0) {
        return 0;
    } else {
        // Recursive case: sum(n) = n + sum(n-1)
        return n + sum(n - 1);
    }
}

int main() {
    int num;

    // Input the value of n
    printf("Enter a positive integer (n): ");
    scanf("%d", &num);

    if (num < 1) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    // Calculate and print the sum
    int result = sum(num);
    printf("Sum of numbers from 1 to %d = %d\n", num, result);

    return 0;
}
