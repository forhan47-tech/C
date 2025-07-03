#include <stdio.h>

int main() {
    char str1[3][20] = {
        "Hello",
        "World",
        "C Programming"
    };

    // Modifying the second string
    str1[1][0] = 'M'; // Change 'World' to 'Morld'
    printf("Modified string 1: %s\n", str1[1]);
    
    // Modifying the third string
    char *str2[3] = {"C", "Programming", "Language"};

    str2[2] = "C Language"; // ✅ Works fine, since it's a pointer array
    printf("Modified string 2: %s\n", str[2]);
  
    return 0;
}