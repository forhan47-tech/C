#include <stdio.h>
#include <stdlib.h>  // For exit()

int main() {
    FILE *file;

    // Open the file in "r+" mode (read and write)
    file = fopen("example.txt", "r+");
    if (file == NULL) {
        perror("Error opening file");
        exit(1);
    }

    // Write data to the file
    fprintf(file, "Hello, World!\n");
    fprintf(file, "This is a test file.\n");

    // Rewind the file pointer to the beginning
    rewind(file);

    // Read and display the contents of the file
    char ch;
    printf("File content:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);
    printf("\nFile operations completed successfully.\n");

    return 0;
}

