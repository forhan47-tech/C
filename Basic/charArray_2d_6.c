#include <stdio.h>

int main() {
    char sentences[2][50] = { "Welcome to AI!", "Learning C is fun." };

    for (int i = 0; i < 2; i++) {
        printf("Sentence %d: %s\n", i + 1, sentences[i]);
    }

    return 0;
}
