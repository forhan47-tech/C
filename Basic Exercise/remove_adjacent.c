#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abbaca";
    int len = strlen(str);
    int index = 0;

    for (int i = 0; i < len; i++) {
        if (index == 0 || str[index - 1] != str[i]) {
            str[index++] = str[i];
        } else {
            index--; // Remove adjacent duplicate
        }
    }

    str[index] = '\0'; // Null termination
    printf("Processed String: %s\n", str);
    return 0;
}
