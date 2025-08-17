#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int maxLen = 0, currentLen = 0;

    printf("Enter a binary string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') str[--len] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '1') {
            currentLen++;
            if (currentLen > maxLen)
                maxLen = currentLen;
        } else {
            currentLen = 0;
        }
    }

    printf("\nLongest sequence of consecutive '1's: %d\n", maxLen);
    return 0;
}
