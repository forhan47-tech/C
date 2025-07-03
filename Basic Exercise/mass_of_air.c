#include <stdio.h>

#define R 8.31      // Universal gas constant (J/mol·K)
#define MOLAR_MASS 28.97  // Molar mass of air (g/mol)

int main() {
    double P, V, T, n, mass;

    // Get user input
    printf("Enter pressure (kPa): ");
    scanf("%lf", &P);
    printf("Enter volume (m^3): ");
    scanf("%lf", &V);
    printf("Enter temperature (K): ");
    scanf("%lf", &T);

    // Convert pressure to Pascals
    P *= 1000;

    // Calculate number of moles using PV = nRT
    n = (P * V) / (R * T);

    // Calculate mass of air
    mass = (n * MOLAR_MASS) / 1000;  // Convert grams to kg

    printf("Mass of air in the tire: %.2f kg\n", mass);

    return 0;
}

