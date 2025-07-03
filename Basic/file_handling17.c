#include <stdio.h>

int main() {
    FILE *file;
    char line[1024];

    file = fopen("output.txt", "w");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter multiple lines (type 'exit' to stop):\n");

    while (1) {
        fgets(line, sizeof(line), stdin);
        if (line[0] == 'e' && line[1] == 'x' && line[2] == 'i' && line[3] == 't') {  // Check for exit command
            break;
        }
        fputs(line, file);
    }

    fclose(file);
    printf("Lines written successfully to output.txt.\n");
    return 0;
}
