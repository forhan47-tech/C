#include <stdio.h>

int main() {
    char *str = "Pointers Rock!";

    while (*str != '\0') {
        printf("%c ", *str);
        str++;  // Move to next character
    }
    return 0;
}
