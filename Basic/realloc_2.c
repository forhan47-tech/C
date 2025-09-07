#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int size = 10;
    char *str = (char*)malloc(size * sizeof(char));

    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter a string: ");
    fgets(str, size, stdin);

    size += 20;
    str = (char*)realloc(str, size * sizeof(char));

    strcat(str, " - dynamically resized!");  

    printf("Updated: %s\n", str);

    free(str);
    return 0;
}

