#include <stdio.h>

int main() {
    // Age of the person
    int age;

    printf("what's your age? ");
    scanf("%d", &age);
    // Check if the person is eligible for a senior citizen
    if (age >= 60) {
        printf("You are a senior citizen!");
    } else {
        printf("You are not a senior citizen.");
    }

    return 0;
}
