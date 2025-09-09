#include <stdio.h>

void counter() {
    static int count = 0;  // Initialized only once, retains value between calls
    count++;
    printf("Count: %d\n", count);
}

int main() {
    counter();  
    counter();  
    counter();  
    return 0;
}
