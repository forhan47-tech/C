#include <stdio.h>

int main() {
    char str[1000];
    int start = 0, maxLen = 0, maxStart = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // ASCII tracker
    int seen[256] = {-1};
    for (int i = 0; i < 256; i++) seen[i] = -1;

    for (int end = 0; str[end] != '\0' && str[end] != '\n'; end++) {
        char ch = str[end];
        if (seen[(unsigned char)ch] >= start)
            start = seen[(unsigned char)ch] + 1;

        seen[(unsigned char)ch] = end;

        if (end - start + 1 > maxLen) {
            maxLen = end - start + 1;
            maxStart = start;
        }
    }

    printf("\nLongest substring without repeating characters:\n");
    for (int i = maxStart; i < maxStart + maxLen; i++)
        printf("%c", str[i]);
    printf("\nLength: %d\n", maxLen);

    return 0;
}
