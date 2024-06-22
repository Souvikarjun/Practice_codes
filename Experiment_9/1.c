#include <stdio.h>

int main() {
    // Declare variables
    int m = 10;
    int n, o;
    int *z;

    // Assign the address of m to pointer z
    z = &m;

    // Print the values and addresses
    printf("Pointer : Show the basic declaration of pointer :\n\n");

    printf("Here is m=10, n and o are two integer variables, and *z is an integer.\n");
    
    printf("z stores the address of m  = %p\n", z);
    printf("*z stores the value of m = %d\n\n", *z);

    printf("&m is the address of m = %p\n", &m);
    printf("&n stores the address of n = %p\n", &n);
    printf("&o stores the address of o = %p\n", &o);
    printf("&z stores the address of z = %p\n", &z);

    return 0;
}
