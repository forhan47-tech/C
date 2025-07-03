#include <stdio.h>
#include <ctype.h>

int main() {
    char word[] = "Copilot";

    for (int i = 0; word[i] != '\0'; i++) {
        word[i] = toupper(word[i]);  // Convert to uppercase
    }

    printf("Uppercase: %s\n", word);
    return 0;
}
