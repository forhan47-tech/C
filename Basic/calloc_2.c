#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = (char*)calloc(20, sizeof(char));  // Allocate space for 20 characters

    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter a string: ");
    fgets(str, 20, stdin);  // Read string dynamically

    printf("Stored string: %s", str);

    free(str);  // Free allocated memory

    return 0;
}

