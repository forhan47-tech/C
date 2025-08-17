#include <stdio.h>

int main() {
    char str[1000];
    int freq[256] = {0};  // Frequency table for all ASCII characters

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequencies
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];  // Avoid negative indexing
        freq[ch]++;
    }

    // Display repeated characters
    printf("\nRepeated characters:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 1 && i != '\n')  // Ignore newline
            printf("'%c' occurred %d times\n", i, freq[i]);
    }

    return 0;
}
