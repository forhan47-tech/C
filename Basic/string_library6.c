#include <string.h>
#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    char *ptr = strchr(str, 'W');
    if (ptr != NULL) {
        printf("Character found at position: %ld\n", ptr - str);
    } else {
        printf("Character not found.\n");
    }
    return 0;
}