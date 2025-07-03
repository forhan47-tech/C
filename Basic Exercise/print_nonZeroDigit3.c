#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char num[200];
    printf("Enter a number: ");
    scanf("%s", num);

    char first = '\0', last = '\0';
    int len = strlen(num);

    // Find first nonzero digit
    for (int i = 0; num[i] != '\0'; i++) {
        if (isdigit(num[i]) && num[i] != '0') {
            first = num[i];
            break;
        }
    }

    // Find last nonzero digit
    for (int i = len - 1; i >= 0; i--) {
        if (isdigit(num[i]) && num[i] != '0') {
            last = num[i];
            break;
        }
    }

    if (first && last) {
        printf("First nonzero digit: %c\n", first);
        printf("Last nonzero digit: %c\n", last);
    } else {
        printf("No nonzero digits found.\n");
    }

    return 0;
}
