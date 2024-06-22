#include <stdio.h>

int main() {
    // Declare variables
    int num1, num2, sum;

    // Input the first number
    printf("Input the first number: ");
    scanf("%d", &num1);

    // Input the second number
    printf("Input the second number: ");
    scanf("%d", &num2);

    // Declare pointers
    int *ptr1, *ptr2;

    // Assign the addresses of the variables to the pointers
    ptr1 = &num1;
    ptr2 = &num2;

    // Add the numbers using pointers
    sum = *ptr1 + *ptr2;

    // Print the result
    printf("The sum of the entered numbers is : %d\n", sum);

    return 0;
}
