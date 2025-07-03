#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Copilot";
    char ch = 'o';
    int found = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            printf("Character '%c' found at index %d\n", ch, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Character '%c' not found.\n", ch);
    }

    return 0;
}
