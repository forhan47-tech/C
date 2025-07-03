#include <stdio.h>

int main() {
    int n, value, count = 0, min, max, sum = 0;

    printf("Enter number of integers: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        if (value > 0) {
            if (count == 0) {
                min = max = value;
            } else {
                if (value < min) min = value;
                if (value > max) max = value;
            }
            sum += value;
            count++;
        }
    }

    if (count > 0) {
        double avg = (double)sum / count;
        printf("Positive count: %d\n", count);
        printf("Min: %d, Max: %d, Average: %.2f\n", min, max, avg);
    } else {
        printf("No positive numbers entered.\n");
    }

    return 0;
}
