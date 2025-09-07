#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, World!";
    char dest[50]; // Ensure sufficient space

    strcpy(dest, src); // Copy src into dest

    printf("Source string: %s\n", src);
    printf("Destination string: %s\n", dest);

    return 0;
}