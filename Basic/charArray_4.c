#include <stdio.h>

int main() {
    char str[] = "Pointer Example";
    int i = 0;

    printf("Characters using pointer:\n");
    while(str[i] != '\0') {
        printf("%c ", str[i]); // Print each character using pointer notation
        i++;
    }
    return 0;
}