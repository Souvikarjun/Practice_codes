#include <stdio.h>

int main() {
    FILE *filePointer;
    char fileName[100];
    int numberOfLines;
    char line[100];

    // Input the number of lines to be written
    printf("Input the number of lines to be written: ");
    scanf("%d", &numberOfLines);

    // Input the file name to be opened for writing
    printf("Input the file name to be opened for writing: ");
    scanf("%s", fileName);

    // Open the file for writing
    filePointer = fopen(fileName, "w");

    // Check if the file is successfully opened
    if (filePointer == NULL) {
        printf("Error opening the file. Exiting...\n");
        return 1;
    }

    // Input and write the lines to the file
    printf("Input the lines:\n");
    for (int i = 0; i < numberOfLines; i++) {
        getchar();
        fgets(line, sizeof(line), stdin);
        fprintf(filePointer, "%s", line);
    }

    // Close the file
    fclose(filePointer);

    // Display the content of the file
    printf("The content of the file %s is:\n", fileName);

    // Reopen the file for reading
    filePointer = fopen(fileName, "r");

    // Check if the file is successfully opened for reading
    if (filePointer == NULL) {
        printf("Error opening the file for reading. Exiting...\n");
        return 1;
    }

    // Read and print the content of the file
    while (fgets(line, sizeof(line), filePointer) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(filePointer);

    return 0;
}
