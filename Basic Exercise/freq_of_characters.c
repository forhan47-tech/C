#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "Hello, World!"; 
    int freq[256] = {0}; // Array to store frequency of each character

    
    // Count frequency of each character
    for (int i = 0; i < strlen(str); i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Display frequency
    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }

    return 0;
}


