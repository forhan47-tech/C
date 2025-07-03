#include <stdio.h>

int main() {
    FILE *filePointer = fopen("example.txt", "r");
    char line[100];

    if (filePointer == NULL) {
        perror("Error opening file");
        return 1;
    }

    while (fgets(line, sizeof(line), filePointer) != NULL) {
        printf("%s", line);
    }

    fclose(filePointer);

    return 0;
}