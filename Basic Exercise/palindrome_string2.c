#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int len, isPalin = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline
    len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') str[--len] = '\0';

    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPalin = 0;
            break;
        }
    }

    if (isPalin)
        printf("\nThe string is a palindrome.\n");
    else
        printf("\nThe string is NOT a palindrome.\n");

    return 0;
}
