#include <stdio.h>
#include <stdbool.h>

int main() {
    int age = 18;
    bool isEligible = (age >= 18);  // Evaluate eligibility using Boolean

    if (isEligible) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}