#include <stdio.h>

// Function to calculate square of a number
int square(int num) {
    return num * num; // Returns the calculated value
}

int main() {
    int result = square(5); // Capture returned value
    printf("Square of 5 is: %d\n", result); // Output: Square of 5 is: 25
    return 0;
}