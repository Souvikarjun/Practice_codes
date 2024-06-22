#include <stdio.h>

int main() {
    FILE *filePointer;
    char fileName[100];
    char ch;
    int numberOfLines = 0;

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

    // Count the number of lines in the file
    while ((ch = fgetc(filePointer)) != EOF) {
        if (ch == '\n') {
            numberOfLines++;
        }
    }

    // Close the file
    fclose(filePointer);

    // Display the number of lines in the file
    printf("The lines in the file %s are: %d\n", fileName, numberOfLines);

    return 0;
}
