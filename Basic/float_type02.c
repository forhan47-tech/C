#include <stdio.h>

int main() {
    float f = 3.14159f;            
    double d = 2.718281828459045;  

    // Scientific notation
    printf("Float (scientific): %e\n", f);  
    printf("Double (scientific): %e\n", d); 

    // Shortest representation
    printf("Float (shortest): %g\n", f);   
    printf("Double (shortest): %g\n", d);  

    return 0;
}
