#include <stdio.h>

int main() {
    char str[] = "Hello"; // String stored as a character array
    char *ptr = str;      // Pointer to first character

    printf("First character: %c\n", *ptr);
    printf("Second character: %c\n", *(ptr + 1));

    return 0;
}
