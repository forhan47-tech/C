#include <stdio.h>

int main() {
    FILE *file1, *file2, *merged;
    char ch;

    file1 = fopen("file1.txt", "r");
    file2 = fopen("file2.txt", "r");
    merged = fopen("merged.txt", "w");

    if (file1 == NULL || file2 == NULL || merged == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Copy file1 content to merged file
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, merged);
    }

    // Copy file2 content to merged file
    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, merged);
    }

    fclose(file1);
    fclose(file2);
    fclose(merged);

    printf("Files merged successfully.\n");
    return 0;
}
