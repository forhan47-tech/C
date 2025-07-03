#include <stdio.h>

// Function to print a string
void printString(char str[]) {
    printf("String received: %s\n", str);
}

int main() {
    char myString[] = "Hello, C!";
    printString(myString);  
    return 0;
}

