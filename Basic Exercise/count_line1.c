#include <stdio.h>

int main() {
    char line[1000];
    int count = 0;

    printf("Enter text (press Ctrl+D to end input on Linux/macOS, Ctrl+Z then Enter on Windows):\n");

    while (fgets(line, sizeof(line), stdin)) {
        count++;
    }

    printf("\nTotal number of lines: %d\n", count);
    return 0;
}
