#include <stdio.h> 

void example() {
    int x = 5; // Local scope
    {
        int x = 10; // block scope
        printf("Inner block x: %d\n", x); 
    }
    printf("Outer block x: %d\n", x); 
}

int main() {
    printf("Calling example function:\n");
    example();
    return 0;  
}