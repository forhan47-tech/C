#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    
    // Calculate the length of the string
    size_t length = strlen(str);
    
    printf("The length of the string is: %lu\n", length);
    
    return 0;
}