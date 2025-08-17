#include <stdio.h>
#include <string.h>

int main() {
    char str1[1000], str2[1000];
    int freq[256] = {0};  // ASCII tracker
    int count = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Mark characters from str1
    for (int i = 0; str1[i] != '\0'; i++) {
        unsigned char ch = str1[i];
        if (!freq[ch]) {
            freq[ch] = 1;
            count++;
        }
    }

    // Mark characters from str2
    for (int i = 0; str2[i] != '\0'; i++) {
        unsigned char ch = str2[i];
        if (!freq[ch]) {
            freq[ch] = 1;
            count++;
        }
    }

    printf("\nTotal unique characters in both strings: %d\n", count);
    return 0;
}
