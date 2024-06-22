#include <stdio.h>

int main() {
    /* Initial positions of the players */
    int JP = 5;
    int RP = 12;

    printf("Initial positions:\n");
    printf("Jyo's position: Square %d\n", JP);
    printf("Rebecca's position: Square %d\n", RP);

    /* Exchange the positions using a temporary variable */
    int temp = JP;
    JP = RP;
    RP = temp;

    printf("\nAfter exchanging positions:\n");
    printf("Jyo's position: Square %d\n", JP);
    printf("Rebecca's position: Square %d\n", RP);

    return 0;
}
