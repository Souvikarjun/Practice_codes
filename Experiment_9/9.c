#include <stdio.h>

// Function to calculate the length of a string using a pointer
int stringLength(char *str) {
    int length = 0;

    // Traverse the string using the pointer until the null character '\0' is encountered
    while (*str != '\0') {
        length++;
        str++;
    }

    return length;
}

int main() {
    // Declare variables
    char str[100];

    // Input a string
    printf("Input a string: ");
    scanf("%s", str);

    // Calculate the length of the string using a pointer
    int length = stringLength(str);

    // Print the result
    printf("The length of the given string %s is: %d\n", str, length);

    return 0;
}
