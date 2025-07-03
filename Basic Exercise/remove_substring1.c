#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str[] = "Hello world! Hello universe!";
    char sub[] = "Hello ";
    char result[100];  // Result after removal
    int i = 0, j = 0, k;

    while (str[i] != '\0') {
        bool isMatch = 1;
        for (k = 0; sub[k] != '\0'; k++) {
            if (str[i + k] != sub[k]) {
                isMatch = 0;
                break;
            }
        }

        if (isMatch) {
            i += k;  // Skip the substring
        } else {
            result[j++] = str[i++];  // Copy valid characters
        }
    }

    result[j] = '\0';  // Null-terminate result

    printf("Updated String: %s\n", result);

    return 0;
}
