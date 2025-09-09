#include <stdio.h>

int main() {
    FILE *fptr = fopen("data.txt", "w");
    
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fputc('A', fptr); // Write character
    fclose(fptr);
    return 0;
}
