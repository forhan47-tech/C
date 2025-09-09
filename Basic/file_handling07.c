#include <stdio.h>

int main() {
    FILE *fptr = fopen("example.txt", "r"); // open a file in read mode

    if (fptr == NULL) {
        perror("Error: Unable to open file.");
        return 1;
    }

    fclose(fptr); // Close the file

    printf("File opened and closed successfully.\n");
    return 0;
}