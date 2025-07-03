#include <stdio.h>

int main() {
    char str[] = "Copilot";

    for (int i = 0; str[i] != '\0'; i++) {  // Loop until null terminator
        printf("Character %d: %c\n", i, str[i]);
    }

    return 0;
}
