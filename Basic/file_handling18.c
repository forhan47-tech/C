#include <stdio.h>

int main() {
    FILE *file = fopen("numbers.txt", "r");
    int num;

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Numbers in file:\n");

    while (fscanf(file, "%d", &num) == 1) { 
        printf("%d\n", num);
    }

    fclose(file);
    return 0;
}
