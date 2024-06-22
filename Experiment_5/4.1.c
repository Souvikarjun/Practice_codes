#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size], merged[size * 2];

    // Input elements for the first array
    printf("Enter elements for the first array (in descending order):\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input elements for the second array
    printf("Enter elements for the second array (in descending order):\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge the two arrays in descending order
    int i = 0, j = 0, k = 0;
    while (i < size && j < size) {
        if (arr1[i] >= arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < size) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    while (j < size) {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    // Display the merged array
    printf("Merged array in descending order:\n");
    for (int i = 0; i < size * 2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
