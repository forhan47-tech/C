#include <stdio.h>

int square(int num) {
    return num * num; // Returns the calculated value
}

int main() {
    int result = square(5); // Capture returned value
    printf("Square of 5 is: %d\n", result);
    return 0;
}