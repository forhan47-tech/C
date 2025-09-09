#include <stdio.h>

int main() {
    int a = -100;               
    short b = 32767;            
    long c = 2147483647;        
    long long d = 9223372036854775807; 

    printf("Signed int: %d\n", a);
    printf("Signed short: %hd\n", b);
    printf("Signed long: %ld\n", c);
    printf("Signed long long: %lld\n", d);

    return 0;
}
