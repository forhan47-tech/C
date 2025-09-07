#include <stdio.h>

int main() {
    // Example-1
    int x = 0;
    printf("%s\n", (x > 0) ? "Positive" : (x < 0) ? "Negative" : "Zero");

    // Example-2
    int a = 5, b = 10;
    printf("The maximum value is: %d\n", (a > b) ? a : b);

    // Example-3
    int num = 5;
    printf("The number %d is %s.\n", num, (num > 0) ? 
           ((num % 2 == 0) ? "Positive Even" : "Positive Odd") : "Non-Positive");

    return 0;
}