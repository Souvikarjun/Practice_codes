#include <stdio.h>

int main() {
    /* Initial coin counts */
    int aliceCoins = 10;
    int bobCoins = 15;

    printf("Initial coin counts:\n");
    printf("Alice's coins: %d\n", aliceCoins);
    printf("Bob's coins: %d\n", bobCoins);

    /*Exchange the values without a temporary variable using XOR */
    aliceCoins = aliceCoins ^ bobCoins;
    bobCoins = aliceCoins ^ bobCoins;
    aliceCoins = aliceCoins ^ bobCoins;

    printf("\nAfter exchanging values:\n");
    printf("Alice's coins: %d\n", aliceCoins);
    printf("Bob's coins: %d\n", bobCoins);

    return 0;
    
}
