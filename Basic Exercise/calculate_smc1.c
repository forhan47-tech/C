#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "110101"; // Example binary string 1
    char str2[100] = "101101"; // Example binary string 2
    int matches = 0, totalBits = 0;

    
    int length1 = strlen(str1);
    int length2 = strlen(str2);

    // Ensure both strings have the same length
    if (length1 != length2) {
        printf("Error: Strings must be of the same length.\n");
        return 1;
    }

    // Compute SMC score
    for (int i = 0; i < length1; i++) {
        if (str1[i] == str2[i]) {
            matches++; // Matching bits
        }
        totalBits++;
    }

    float smc = (float)matches / totalBits;
    printf("Simple Matching Coefficient (SMC) score: %.2f\n", smc);

    return 0;
}

