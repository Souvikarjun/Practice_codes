#include <stdio.h>
#include <string.h>

int main() {
    // Define the correct username and access code
    char correct_username[50] = "ghost";
    int correct_access_code = 874321;

    // Variables to store user input
    char username[50];
    int access_code;

    // Prompt the user for their username and access code
    printf("Enter your username: ");
    scanf("%s", username);

    printf("Enter your access code: ");
    scanf("%d", &access_code);

    // Check if the username and access code are correct
    if (strcmp(username, correct_username) == 0) {
        if (access_code == correct_access_code) {
            printf("Access granted. Welcome,!\n");
        } else {
            printf("Incorrect access code. Access denied.\n");
        }
    } else {
        printf("Unknown username. Access denied.\n");
    }

    return 0;
}
