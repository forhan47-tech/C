#include <stdio.h>

// return integer, two integer parameters
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 3);
    
    printf("Sum: %d\n", result);
    return 0;
}
