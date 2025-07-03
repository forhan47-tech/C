#include <stdio.h>
#include <string.h>

int main() {
    char dest[50] = "Hello, "; // Ensure sufficient space
    char src[] = "World!";

    strcat(dest, src); // Append src to dest

    printf("Concatenated string: %s\n", dest);

    return 0;
}