#include <stdio.h>

void example() {
    int localVariable = 10; // Local variable, accessible only within this function
    printf("%d\n", localVariable); 
}

int main() {
    example();

    // Attempting to access 'localVariable' here would cause an error
    // printf("%d\n", localVariable); // Uncommenting this line will cause a compilation error 
    return 0; 
}