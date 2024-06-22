#include <stdio.h>

int main() {
    FILE *filePointer;
    char fileName[100];
    char ch;
    int numberOfCharacters = 0, numberOfWords = 0;
    int inWord = 0; // Flag to track if currently inside a word

    // Input the file name to be opened
    printf("Input the file name to be opened: ");
    scanf("%s", fileName);

    // Open the file for reading
    filePointer = fopen(fileName, "r");

    // Check if the file is successfully opened
    if (filePointer == NULL) {
        printf("Error opening the file. Exiting...\n");
        return 1;
    }

    // Count the number of characters and words in the file
    while ((ch = fgetc(filePointer)) != EOF) {
        numberOfCharacters++;

        // Check if the current character is part of a word
        if (ch == ' ' || ch == '\t' || ch == '\n') {
            inWord = 0; // Not inside a word
        } else if (inWord == 0) {
            inWord = 1; // Start of a new word
            numberOfWords++;
        }
    }

    // Close the file
    fclose(filePointer);

    // Display the content of the file
    printf("The content of the file %s is:\n", fileName);
    
    // Reopen the file for reading to display its content
    filePointer = fopen(fileName, "r");

    // Check if the file is successfully opened for reading
    if (filePointer == NULL) {
        printf("Error opening the file for reading. Exiting...\n");
        return 1;
    }

    while ((ch = fgetc(filePointer)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(filePointer);

    // Display the number of words and characters in the file
    printf("\nThe number of words in the file: %d\n", numberOfWords);
    printf("The number of characters in the file: %d\n", numberOfCharacters);

    return 0;
}
