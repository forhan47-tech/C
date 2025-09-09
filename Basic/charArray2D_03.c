#include <stdio.h>

int main() {
    // Example-1
    char str1[3][20] = {
        "Hello",
        "World",
        "C Programming"
    };
 
    str1[1][0] = 'M'; // "World" → "Morld"
    printf("Modified string 1: %s\n", str1[1]);

    // Example-2
    char *str2[3] = {"C", "Programming", "Language"};

    str2[2] = "C Language"; // "Language" → "C Language"
    printf("Modified string 2: %s\n", str2[2]);

    return 0;
}