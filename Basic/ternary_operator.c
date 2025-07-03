#include <stdio.h>

int main() {
    // check if a number is positive, negative, or zero
    int x = 0;
    printf("%s\n", (x > 0) ? "Positive" : (x < 0) ? "Negative" : "Zero");

    // Find the maximum of two numbers using the ternary operator
    int a = 5, b = 10;
    printf("The maximum value is: %d\n", (a > b) ? a : b);

    // Check if a number is even or odd using nested ternary operators
    int num = 5;
    printf("The number %d is %s.\n", num, (num > 0) ? 
           ((num % 2 == 0) ? "Positive Even" : "Positive Odd") : "Non-Positive");

    return 0;
}