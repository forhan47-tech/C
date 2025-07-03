#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Reading two integers from the user
    printf("Enter two integers:\n");
    scanf("%d %d", &num1, &num2);  // Read two integers separated by space

    // Writing the integers and their sum
    printf("You entered: %d and %d\n", num1, num2);

    return 0;
}