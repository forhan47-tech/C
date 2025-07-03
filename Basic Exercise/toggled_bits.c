#include <stdio.h>

int main() {
    int num, toggled;

    // Get user input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Toggle all bits using bitwise NOT (~)
    toggled = ~num;

    // Display result
    printf("Toggled Bits Result: %d\n", toggled);

    return 0;
}

