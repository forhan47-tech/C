#include <stdio.h>

int main() {
    FILE *fptr = fopen("data.txt", "w");
    
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fputs("Hello, File Handling!", fptr); // Write a string  
    fclose(fptr);
    return 0;
}
