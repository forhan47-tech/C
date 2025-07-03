#include <stdio.h>

int main() {
    char str1[] = "Hello, ";   // First string
    char str2[] = "World!";    // Second string
    char result[50];  // Destination array (ensure enough space)
    
    int i = 0, j = 0;

    // Copy first string to result
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    // Append second string to result
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }

    result[i] = '\0';  // Append null terminator

    // Display concatenated string
    printf("Concatenated String: %s\n", result);

    return 0;
}

