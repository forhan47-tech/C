#include <stdio.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("\nString before newline:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') break;  // Stop at newline
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}
