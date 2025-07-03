#include <string.h>
#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    char *ptr = strstr(str, "World");
    if (ptr != NULL) {
        printf("Substring found: %s\n", ptr);
    } else {
        printf("Substring not found.\n");
    }
    return 0;
}