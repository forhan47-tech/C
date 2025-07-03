#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char fullName[100], first[50], last[50];

    printf("Enter your full name (First Last): ");
    scanf("%s %s", first, last);

    reverseString(first);
    reverseString(last);

    printf("Reversed & Swapped Name: %s %s\n", last, first);

    return 0;
}
