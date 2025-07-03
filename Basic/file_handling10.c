#include <stdio.h>

int main() {
    FILE *fptr = fopen("data.txt", "r");
    if (fptr == NULL) {
        printf("File not found!\n");
        return 1;
    }

    char buffer[100];
    fgets(buffer, sizeof(buffer), fptr); // Read string
    printf("Read: %s", buffer);

    fclose(fptr);
    return 0;
}
