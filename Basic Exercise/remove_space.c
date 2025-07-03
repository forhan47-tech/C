#include <stdio.h>

int main() {
    char str[] = "Hello World Example!";
    int i = 0, j = 0;

    while (str[i] != '\0') {
        if (str[i] != ' ') {  // Skip spaces
            str[j++] = str[i];
        }
        i++;
    }

    str[j] = '\0';  // Null-terminate the modified string

    printf("Updated String: %s\n", str);

    return 0;
}
