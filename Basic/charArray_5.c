#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str); // Reads input into `str`
    printf("You entered: %s\n", str);

    return 0;
}

