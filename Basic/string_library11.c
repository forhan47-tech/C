#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "HelloWorld";
    
    // Overlapping memory regions
    memmove(str + 5, str, 5);

    printf("Updated String: %s\n", str);
    return 0;
}
