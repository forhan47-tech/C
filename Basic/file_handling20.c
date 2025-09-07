#include <stdio.h>

int main() {
    FILE *source, *destination;
    char ch;

    // Open source file in read mode and destination file in write mode
    source = fopen("source.txt", "r"); 
    destination = fopen("destination.txt", "w"); 

    if (source == NULL || destination == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    // Copy contents character by character
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully!\n");

    fclose(source);
    fclose(destination);

    return 0;
}

