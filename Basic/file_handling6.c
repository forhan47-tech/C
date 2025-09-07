#include <stdio.h>

int main() {
    FILE *fptr = fopen("data.txt", "r");
    
    if (fptr == NULL) {
        printf("File not found!\n");
        return 1;
    }

    int ch;
    while ((ch = fgetc(fptr)) != EOF) {
        putchar(ch);
    }

    fclose(fptr);
    return 0;
}
