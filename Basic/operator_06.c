#include <stdio.h>

int main() {
    int a = 5;
    printf("(++a): %d\n", ++a);  
    printf("(a++): %d\n", a++); 

    int b = 5;
    printf("(--b): %d\n", --b);  
    printf("(b--): %d\n", b--); 

    printf("(+a): %d\n", +a);
    printf("(-a): %d\n", -a);

    return 0;
}
