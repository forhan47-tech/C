#include <stdio.h>

int main() {
    char *strArr[] = {"Hello", "World", "C"};
    char **ptr = strArr; // Pointer to pointer

    printf("Second string: %s\n", ptr[1]); // Output: World

    return 0;
}
