#include <stdio.h>

int main() {
    char ch = 'A';              // Single character
    printf("Character: %c\n", ch);       // Prints the character 'A' 

    printf("ASCII value: %d\n", ch);     // Prints the ASCII value of 'A' (65)

    printf("Next character: %c\n", ch + 1); // Prints the next character 'B'
    printf("Previous character: %c\n", ch - 1); // Prints the previous character '@'
    
    return 0;
}