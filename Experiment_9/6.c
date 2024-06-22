#include <stdio.h>

int main() {
    // Declare variables
    int n;

    // Input the number of elements
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Input the elements in the array
    printf("Input %d number of elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Print the elements using a pointer
    printf("\nElements in the array using a pointer:\n");
    int *ptr = arr; // Pointer pointing to the first element of the array

    for (int i = 0; i < n; i++) {
        printf("element - %d : %d\n", i, *ptr);
        ptr++; // Move the pointer to the next element
    }

    return 0;
}
