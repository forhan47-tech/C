#include <stdio.h>

int main() {
    const double PI = 3.14159;
    const int MAX_LENGTH = 100;

    // PI = 45; Error: not allowed

    printf("The value of PI is: %.5f\n", PI);
    printf("The maximum length allowed is: %d\n", MAX_LENGTH);

    return 0;
}