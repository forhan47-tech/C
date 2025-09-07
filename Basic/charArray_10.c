#include <stdio.h>

int main() {
    // Example-1
    char str1[] = "Hello, World!";

    printf("%s\n", str1); 
    printf("First character: %c\n", str1[0]); 
 
    // Example-2
    char str2[] = {'H', 'e', 'l', 'l', 'o', '\0'};

    printf("%s\n", str2); 
    printf("Second character: %c\n", str2[1]); 
    
    // Example-3
    char *str3 = "Hello, World!";

    printf("%s\n", str3); 
    printf("Third character: %c\n", str3[2]); 

    return 0;
}