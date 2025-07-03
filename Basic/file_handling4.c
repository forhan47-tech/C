#include <stdio.h>

int main() {
    FILE *fptr = fopen("data.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fptr, "Name: %s, Age: %d\n", "Alice", 25); // Write formatted text
    fprintf(fptr, "Hello, World!\n"); // Write another line
    
    fclose(fptr);
    return 0;
}
