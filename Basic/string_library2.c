#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    
    size_t length = strlen(str); // Calculate length
    
    printf("The length of the string is: %lu\n", length);
    
    return 0;
}