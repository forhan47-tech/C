#include <stdio.h>

int main() {
    char str[1000];
    int freq[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count character frequency
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (ch != '\n')  // Skip newline
            freq[ch]++;
    }

    // Count duplicates
    int duplicateCount = 0;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 1)
            duplicateCount++;
    }

    printf("\nTotal duplicate characters: %d\n", duplicateCount);
    return 0;
}
