#include <stdio.h>

int main() {
    // Declare a variable
    int m = 29;

    // Print the address and value of m
    printf("Address of m : %p\n", &m);
    printf("Value of m : %d\n\n", m);

    // Declare a pointer variable ab and assign the address of m to it
    int *ab = &m;

    // Print the address and content of pointer ab
    printf("Now ab is assigned with the address of m.\n");
    printf("Address of pointer ab : %p\n", ab);
    printf("Content of pointer ab : %d\n\n", *ab);

    // Change the value of m and print the updated content of pointer ab
    m = 34;
    printf("The value of m assigned to 34 now.\n");
    printf("Address of pointer ab : %p\n", ab);
    printf("Content of pointer ab : %d\n\n", *ab);

    // Change the content of pointer ab and print the updated value of m
    *ab = 7;
    printf("The pointer variable ab is assigned with the value 7 now.\n");
    printf("Address of m : %p\n", &m);
    printf("Value of m : %d\n", m);

    return 0;
}
