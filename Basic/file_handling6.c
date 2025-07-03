#include <stdio.h>

int main() {
    FILE *fptr = fopen("data.txt", "r");
    if (fptr == NULL) {
        printf("File not found!\n");
        return 1;
    }

    int num;
    while (fscanf(fptr, "%d", &num) != EOF) {
        printf("Read number: %d\n", num);
    }

    fclose(fptr);
    return 0;
}
