#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare variables
    int n, i;
    float *arr, max;

    // Input the total number of elements
    printf("Input total number of elements (1 to 100): ");
    scanf("%d", &n);

    // Validate the input for a reasonable range (1 to 100)
    if (n < 1 || n > 100) {
        printf("Invalid input. Please enter a number between 1 and 100.\n");
        return 1; // Return with an error code
    }

    // Allocate memory dynamically for the array
    arr = (float *)malloc(n * sizeof(float));

    // Input the elements in the array
    for (i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    // Assume the first element is the maximum
    max = arr[0];

    // Find the largest element
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Print the result
    printf("\nThe Largest element is : %.2f\n", max);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
