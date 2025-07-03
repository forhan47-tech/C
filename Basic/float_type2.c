#include <stdio.h>

int main() {
    double large = 1.2e6;    // 1.2 × 10⁶ = 1200000
    double small = 1.2e-6;   // 1.2 × 10⁻⁶ = 0.0000012

    printf("Large value: %e\n", large); // Scientific notation
    printf("Small value: %e\n", small);

    return 0;
}