#include <stdio.h>

int main() {
    char str[100];
    int num = 0;

    printf("Enter a string of digits: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        // Convert each char digit to number and build final integer
        num = num * 10 + (str[i] - '0');
    }

    printf("\nConverted integer: %d\n", num);
    return 0;
}
