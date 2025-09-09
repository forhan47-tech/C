#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = (char*)malloc(50 * sizeof(char)); 

    if (str == NULL) { 
        printf("Memory allocation failed!\n");
        return 1;  
    }

    printf("Enter your name: ");
    fgets(str, 50, stdin);

    printf("Hello, %s", str);

    free(str); 

    return 0;
}

