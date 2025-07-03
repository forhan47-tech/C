#include <stdio.h>

int main() {
    FILE *file1, *file2;

    // Attach file1 to one stream (read mode) and file2 to another (write mode)
    file1 = fopen("data1.txt", "r");
    file2 = fopen("data2.txt", "w");

    if (file1 == NULL || file2 == NULL) {
        printf("Error: Unable to attach files to streams.\n");
        return 1;
    }

    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file1) != NULL) {
        fputs(buffer, file2); 
    }

    fclose(file1);
    fclose(file2);

    printf("File contents copied from 'data1.txt' to 'data2.txt' successfully.\n");
    return 0;
}