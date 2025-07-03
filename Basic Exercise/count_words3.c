#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[] = "  Hello,   welcome to   C programming!  ";
    int count = 0, inWord = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (!isspace(str[i])) {  // Check if character is part of a word
            if (!inWord) {
                count++;
                inWord = 1;  // Mark that we are inside a word
            }
        } else {
            inWord = 0;  // Reset when encountering space or punctuation
        }
    }

    printf("Total words: %d\n", count);
    return 0;
}
