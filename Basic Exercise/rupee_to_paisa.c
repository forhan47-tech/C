#include <stdio.h>

int main() {
    double rupees;

    // User input
    printf("Enter price in rupees: ");
    scanf("%lf", &rupees);

    // Output in paisa format
    printf("Price in paisa: %.2f paisa\n", rupees * 100);

    return 0;
}

