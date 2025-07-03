#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello, World!";
    char str2[] = ",!";

    // Find the length of the initial segment of str1
    size_t result = strcspn(str1, str2);

    printf("The length of the initial segment without any characters from '%s' is: %lu\n", str2, result);

    return 0;
}