#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";

    int result = strcmp(str1, str2); // compare string

    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result > 0) {
        printf("str1 is greater.\n");
    } else {
        printf("str2 is greater.\n");
    }

    return 0;
}

