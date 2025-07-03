#include <stdio.h>

int main() {
    const double PI = 3.14159;
    const int MAX_LENGTH = 100;

    printf("The value of PI is: %.5f\n", PI);
    printf("The maximum length allowed is: %d\n", MAX_LENGTH);

    // Uncommenting the following line will cause a compilation error:
    // PI = 3.14; 

    return 0;
}