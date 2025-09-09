#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello world";
    char reject[] = "aeiou";

    size_t index = strcspn(str, reject); // Find first match

    printf("First vowel at index: %zu\n", index); 
    return 0;
}
