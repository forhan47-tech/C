#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void removeDuplicates(char str[]) {
    bool seen[256] = {false}; // Assumes ASCII characters

    printf("Unique Characters: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (!seen[str[i]]) {
            printf("%c", str[i]);
            seen[str[i]] = true;
        }
    }
    printf("\n");
}

int main() {
    char str[] = "programming";
    removeDuplicates(str);
    return 0;
}
