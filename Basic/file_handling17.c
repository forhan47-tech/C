#include <stdio.h>

int main() {
    FILE *fptr = fopen("example.txt", "r");

    if (fptr == NULL) {
        perror("Error opening file");
        return 1;
    }

    if (feof(fptr)) {
        printf("\nReached end of file.\n");
    }

    fclose(fptr);
    return 0;
}
