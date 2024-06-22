#include <stdio.h>

int main() {
    FILE *filePointer;
    char sentence[100];

    // Input a sentence to be stored in the file
    printf("Input a sentence for the file: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Open the file for writing
    filePointer = fopen("test1.txt", "w");

    // Check if the file is successfully opened
    if (filePointer == NULL) {
        printf("Error opening the file. Exiting...\n");
        return 1;
    }

    // Write the sentence to the file
    fprintf(filePointer, "%s", sentence);

    // Close the file
    fclose(filePointer);

    printf("The file test1.txt created successfully...!!\n");

    return 0;
}
