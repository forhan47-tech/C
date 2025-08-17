#include <stdio.h>

int main() {
    char str[1000];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    printf("\nToggled case:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z') {
            // Convert uppercase to lowercase
            str[i] = ch + ('a' - 'A');
        } else if (ch >= 'a' && ch <= 'z') {
            // Convert lowercase to uppercase
            str[i] = ch - ('a' - 'A');
        }
    }

    printf("%s", str);
    return 0;
}
