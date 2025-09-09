#include <stdio.h>

int main() {
    char str[] = "C is fun";
    char *ptr = str;

    ptr[0] = 'D';  // Modify first character
    printf("Modified string: %s\n", str);
    return 0;
}