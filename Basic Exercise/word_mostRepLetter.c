#include <stdio.h>
#include <string.h>

int countRepeatedLetters(char *word) {
    int freq[256] = {0}, repeats = 0;

    for (int i = 0; word[i] != '\0'; i++) {
        unsigned char ch = word[i];
        freq[ch]++;
    }

    for (int i = 0; i < 256; i++)
        if (freq[i] > 1)
            repeats++;
    
    return repeats;
}

int main() {
    char str[1000], mostWord[100] = "";
    int maxRepeat = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') str[--len] = '\0';

    // Tokenize by space
    char *token = strtok(str, " ");
    while (token != NULL) {
        int repeats = countRepeatedLetters(token);

        if (repeats > maxRepeat) {
            maxRepeat = repeats;
            strcpy(mostWord, token);
        }

        token = strtok(NULL, " ");
    }

    if (maxRepeat > 0)
        printf("\nWord with most repeated letters: %s (repeats: %d)\n", mostWord, maxRepeat);
    else
        printf("\nNo repeated letters found in any word.\n");

    return 0;
}
