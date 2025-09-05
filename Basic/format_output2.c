#include <stdio.h>

int main() {
    float pi = 3.14159;
    float neg = -2.71828;

    printf("Default: [%f]\n", pi);
    printf("2 decimals: [%.2f]\n", pi);
    printf("Width 8, 3 decimals: [%8.3f]\n", pi);
    printf("Left aligned: [%-8.3f]\n", pi);
    printf("Zero padded: [%08.2f]\n", pi);
    printf("Show sign: [%+8.2f]\n", pi);
    printf("Negative value: [%+8.2f]\n", neg);

    return 0;
}
