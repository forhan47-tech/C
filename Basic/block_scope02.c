#include <stdio.h>

int x = 100;  // Global scope

int main() {
    int x = 10;  // Local scope (shadows global)
    printf("Outer x = %d\n", x);  

    {
        int x = 5;  // Block scope (shadows local)
        printf("Inner block x = %d\n", x);  
    }

    printf("After block x = %d\n", x);  

    return 0;
}
