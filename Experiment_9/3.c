#include <stdio.h>

int main() {
    // Declare variables
    int m = 300;
    float fx = 300.6;
    char cht = 'z';

    // Print initial values
    printf("Pointer : Demonstrate the use of & and * operator :\n");
    printf("m = %d\nfx = %f\ncht = %c\n\n", m, fx, cht);

    // Using & operator
    printf("Using & operator :\n");
    printf("address of m = %p\n", &m);
    printf("address of fx = %p\n", &fx);
    printf("address of cht = %p\n\n", &cht);

    // Using & and * operator
    printf("Using & and * operator :\n");
    printf("value at address of m = %d\n", *(&m));
    printf("value at address of fx = %f\n", *(&fx));
    printf("value at address of cht = %c\n\n", *(&cht));

    // Using only pointer variable
    printf("Using only pointer variable :\n");
    int *ptrM = &m;
    float *ptrFx = &fx;
    char *ptrCht = &cht;
    printf("address of m = %p\n", ptrM);
    printf("address of fx = %p\n", ptrFx);
    printf("address of cht = %p\n\n", ptrCht);

    // Using only pointer operator
    printf("Using only pointer operator :\n");
    printf("value at address of m = %d\n", *ptrM);
    printf("value at address of fx= %f\n", *ptrFx);
    printf("value at address of cht= %c\n", *ptrCht);

    return 0;
}
