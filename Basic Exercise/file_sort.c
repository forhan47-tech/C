#include <stdio.h>
#include <string.h>

int main() {
    FILE *file, *temp;
    char lines[100][1024];  // Array to store lines
    int count = 0, i, j;
    char tempLine[1024];

    file = fopen("input.txt", "r");
    temp = fopen("sorted.txt", "w");

    if (file == NULL || temp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read lines into array
    while (fgets(lines[count], sizeof(lines[count]), file) != NULL) {
        count++;
    }
    fclose(file);

    // Sort lines alphabetically using bubble sort
    for (i = 0; i < count - 1; i++) {
        for (j = i + 1; j < count; j++) {
            if (strcmp(lines[i], lines[j]) > 0) {
                strcpy(tempLine, lines[i]);
                strcpy(lines[i], lines[j]);
                strcpy(lines[j], tempLine);
            }
        }
    }

    // Write sorted lines to file
    for (i = 0; i < count; i++) {
        fputs(lines[i], temp);
    }

    fclose(temp);

    printf("Lines sorted successfully in sorted.txt.\n");
    return 0;
}
