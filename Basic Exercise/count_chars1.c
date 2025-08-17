#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count characters until '\0' or newline
    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    printf("\nTotal characters: %d\n", count);
    return 0;
}
