#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = (char*)calloc(20, sizeof(char));  

    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter a string: ");
    fgets(str, 20, stdin);  

    printf("Stored string: %s", str);

    free(str);  

    return 0;
}

