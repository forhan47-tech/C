
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("data.txt", "r"); // Open file in read mode
    char ch, isWord[256];
    int words = 0, characters = 0; // Declare words and characters

    // Check if file opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read character by character
    while ((ch = fgetc(file)) != EOF) {
        characters++; // Count every character
    }

    // Reset file pointer to the beginning
    rewind(file);

    // Read words and count them
    while (fscanf(file, "%s", isWord) == 1) { // Use correct variable name
        words++; // Corrected word count variable
    }

    // Close the file
    fclose(file);

    // Display results
    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words);

    return 0;
}
