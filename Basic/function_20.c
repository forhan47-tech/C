#include <stdio.h>
#include <stdlib.h>

char* createString() {
    char *str = (char*)malloc(50 * sizeof(char));  
    
    if (str == NULL) return NULL;  

    printf("Enter a string: ");
    fgets(str, 50, stdin);

    return str;  
}

int main() {
    char *text = createString(); 

    printf("Stored string: %s", text);

    free(text); 
    return 0;
}

