#include <stdio.h>

int main() {
    char text[] = "Hello, world!\nThis is a test string.\nCount me in!";
    int chars = 0, words = 0, lines = 0;
    int inWord = 0;

    for (int i = 0; text[i] != '\0'; i++) {
        chars++;

        if (text[i] == '\n') {
            lines++;
        }

        if (text[i] == ' ' || text[i] == '\n' || text[i] == '\t') {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
    }

    // Count the last line if the string isn't empty
    if (text[0] != '\0') {
        lines++;
    }

    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
