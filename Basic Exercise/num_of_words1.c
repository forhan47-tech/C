#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countWords(char *str) {
    int count = 0;
    int inWord = 0; // Tracks if we are inside a word

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i]) || ispunct(str[i])) {
            inWord = 0; // Space or punctuation marks indicate the end of a word
        } else if (!inWord) {
            count++; // Found a new word
            inWord = 1;
        }
    }
    
    return count;
}

int main() {
    char str[] = "Hello,   world! This is C programming.";
    printf("Number of words: %d\n", countWords(str));
    return 0;
}
