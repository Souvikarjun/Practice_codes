#include <stdio.h>

int main() {
    char step1[2]; // To read "C"
    char step2[8]; // To read "Language"
    char step3[14]; // To read "Welcome To C"

    // Step 1: Read "C"
    printf("Step 1: Enter 'C': ");
    scanf("%1s", step1);

    // Step 2: Read "Language"
    printf("Step 2: Enter 'Language': ");
    scanf("%8s", step2);

    // Step 3: Read "Welcome To C"
    printf("Step 3: Enter 'Welcome To C': ");
    scanf(" %[^\n]%*c", step3);

    // Print the complete output
    printf("C, %s, %s !!\n", step2, step3);

    return 0;
}