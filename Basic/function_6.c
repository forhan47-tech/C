#include <stdio.h>

// Function to modify the value at the address passed
void modify(int *p) {
    *p = 20; 
}

int main() {
    int x = 10;  

    modify(&x);  
    printf("%d\n", x);  

    return 0;
}

