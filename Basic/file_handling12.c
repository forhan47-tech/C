#include <stdio.h>

int main() {
    FILE *fptr = fopen("example.txt", "r");
    if (fptr == NULL) {
        printf("File not found!\n");
        return 1;
    }

    char buffer[100];
    fgets(buffer, sizeof(buffer), fptr);
    printf("First read: %s", buffer);

    rewind(fptr); // Reset file pointer to beginning

    fgets(buffer, sizeof(buffer), fptr); // Read first line again
    printf("Second read after rewind: %s", buffer);

    fclose(fptr);
    return 0;
}
