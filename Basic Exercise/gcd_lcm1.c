#include <stdio.h>

int main() {
    int num1, num2, a, b, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Store original values for LCM calculation
    a = num1;
    b = num2;

    // Calculate GCD using Euclidean Algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    // Calculate LCM using the formula
    lcm = (num1 / gcd) * num2;

    printf("GCD of %d and %d is %d\n", num1, num2, gcd);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}

