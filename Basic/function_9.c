#include <stdio.h>

void counterFunction() {
    static int count = 0;  // Static local variable
    count++;
    printf("Function called %d times.\n", count);
}

int main() {
    for (int i = 0; i < 3; i++) {  
        counterFunction();
    }

    return 0;
}
