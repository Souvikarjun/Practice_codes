#include <stdio.h>

int main() {
    FILE *filePointer;
    char fileName[100];
    char content[1000];

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

    // Read the content of the file
    printf("The content of the file %s is:\n", fileName);
    while (fgets(content, sizeof(content), filePointer) != NULL) {
        printf("%s", content);
    }

    // Close the file
    fclose(filePointer);

    return 0;
}
