#include <stdio.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Shift lowercase letters
        if (ch >= 'a' && ch <= 'z') {
            str[i] = (ch == 'z') ? 'a' : ch + 1;
        }
        // Shift uppercase letters
        else if (ch >= 'A' && ch <= 'Z') {
            str[i] = (ch == 'Z') ? 'A' : ch + 1;
        }
    }

    printf("\nModified string:\n%s\n", str);
    return 0;
}
