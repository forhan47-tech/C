#include <stdio.h>

void printString(char *str) {
    printf("String: %s\n", str);
}

int main() {
    char myString[] = "Hello, world!";
    printString(myString);
    return 0;
}

