#include <stdio.h>

int main() {
    long long d = 9223372036854775807;

    size_t size = sizeof(d); 
    printf("Size of long long (in bytes): %zu\n", size);  
    return 0;
}
