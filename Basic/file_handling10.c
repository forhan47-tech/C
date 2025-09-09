#include <stdio.h>

int main() {
    FILE *file = fopen("char.txt", "r");

    if (file == NULL) {
        printf("File not found!\n");
        return 1;
    }

    char ch = fgetc(file);  // Reads a single character
    printf("First character: %c\n", ch);

    fclose(file);
    return 0;
}
