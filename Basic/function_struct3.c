#include <stdio.h>

// Define structure
struct Numbers {
    int a, b;
};

// Function for addition
int add(struct Numbers n) {
    return n.a + n.b;
}

// Function for multiplication
int multiply(struct Numbers n) {
    return n.a * n.b;
}

int main() {
    struct Numbers nums;

    // User input
    printf("Enter two numbers: ");
    scanf("%d %d", &nums.a, &nums.b);

    // Call functions
    printf("\nSum: %d\n", add(nums));
    printf("Product: %d\n", multiply(nums));

    return 0;
}

