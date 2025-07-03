#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define CHAR_SIZE 256 // Supports all ASCII characters

bool isPermutation(char *str, char *sub) {
    int strLen = strlen(str), subLen = strlen(sub);
    if (subLen > strLen) return false; // Substring cannot be longer

    int strFreq[CHAR_SIZE] = {0}, subFreq[CHAR_SIZE] = {0};

    // Count frequency for main string and substring
    for (int i = 0; i < subLen; i++) {
        strFreq[str[i]]++;
        subFreq[sub[i]]++;
    }

    // Check first window
    if (memcmp(strFreq, subFreq, sizeof(strFreq)) == 0) return true;

    // Sliding window for next substrings
    for (int i = subLen; i < strLen; i++) {
        strFreq[str[i - subLen]]--;  // Remove leftmost character
        strFreq[str[i]]++;           // Add new rightmost character

        if (memcmp(strFreq, subFreq, sizeof(strFreq)) == 0) return true;
    }

    return false;
}

int main() {
    char str[] = "aaabcde";
    char sub[] = "baa";

    if (isPermutation(str, sub))
        printf("'%s' is a permutation of a substring in '%s'\n", sub, str);
    else
        printf("'%s' is NOT a permutation of any substring in '%s'\n", sub, str);

    return 0;
}
