#include <stdio.h>
#include <stdlib.h> 

int main() {
    FILE *file = fopen("example.txt", "r+"); // "r+" = read and write mode

    if (file == NULL) {
        perror("Error opening file");
        exit(1);
    }

    fprintf(file, "Hello, World!\n");
    fprintf(file, "This is a test file.\n");

    rewind(file); // Move file pointer back to the beginning

    char ch;
    printf("File content:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
    printf("\nFile operations completed successfully.\n");

    return 0;
}

