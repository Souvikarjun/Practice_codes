#include <stdio.h>
#include <stdlib.h>

// Define the structure for Person
struct Person {
    char name[50];
    int age;
};

int main() {
    // Declare a pointer to the Person structure
    struct Person *personPtr;

    // Allocate memory dynamically for the Person structure
    personPtr = (struct Person *)malloc(sizeof(struct Person));

    // Check if memory allocation is successful
    if (personPtr == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1; // Exit with an error code
    }

    // Input values for the Person structure using the pointer
    printf("Enter name: ");
    scanf("%s", personPtr->name); // Assuming names do not contain spaces

    printf("Enter age: ");
    scanf("%d", &personPtr->age);

    // Display the contents of the Person structure
    printf("\nPerson Information:\n");
    printf("Name: %s\n", personPtr->name);
    printf("Age: %d\n", personPtr->age);

    // Free the dynamically allocated memory
    free(personPtr);

    return 0;
}