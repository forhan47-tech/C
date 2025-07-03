#include <stdio.h>
#include <string.h>

int main() {
    char str[200] = "Hello world from C programming world";
    char target[50] = "world";
    int count = 0;
    
    
    char *token = strtok(str, " "); 
    
    // Count occurrences of the word
    while (token != NULL) {
        if (strcmp(token, target) == 0) {
            count++;
        }
        token = strtok(NULL, " ");
    }

    printf("Frequency of \"%s\": %d\n", target, count);
    
    return 0;
}

