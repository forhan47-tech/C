#include <stdio.h>

int main() {
    int amount, notes;
    int denominations[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};

    printf("Enter the amount: ");
    scanf("%d", &amount);

    printf("\nBreakdown:\n");

    for (int i = 0; i < 9; i++) {
        if (amount >= denominations[i]) {
            notes = amount / denominations[i];
            amount %= denominations[i];
            printf("%d x %d BDT\n", notes, denominations[i]);
        }
    }

    return 0;
}
