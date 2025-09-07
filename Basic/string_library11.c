#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "HelloWorld";
    
    memmove(str + 5, str, 5); // overlapping copy

    printf("Updated String: %s\n", str);
    return 0;
}
