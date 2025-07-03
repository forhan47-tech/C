#include <stdio.h>

int main() {
    // Open the file in read, write, append, read+write modes("r", "w", "a", "r+", "w+", "a+")
    FILE *fptr = fopen("example.txt", "r");

    // Check if the file was opened successfully
    if (fptr == NULL) {
        perror("Error: Unable to open file.");
        return 1;
    }

    // Close the file
    fclose(fptr);

    printf("File opened and closed successfully.\n");
    return 0;
}