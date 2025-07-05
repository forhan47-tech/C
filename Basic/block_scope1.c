#include <stdio.h> 

void example() {
    int x = 5; // Variable in outer block
    {
        int x = 10; // Shadows the outer block's 'x'
        printf("Inner block x: %d\n", x); // Prints 10
    }
    printf("Outer block x: %d\n", x); // Prints 5
}

int main() {
    printf("Calling example function:\n");
    example();
    return 0;  
}