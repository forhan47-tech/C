#include <stdio.h>

int main() {
    int nums[4];

    printf("Enter 4 integers:\n");
    for (int i = 0; i < 4; i++)
        scanf("%d", &nums[i]);

    int max = nums[0], min = nums[0];

    for (int i = 1; i < 4; i++) {
        if (nums[i] > max)
            max = nums[i];
        if (nums[i] < min)
            min = nums[i];
    }

    int diff = max - min;
    
    printf("Max = %d, Min = %d\n", max, min);
    printf("Difference = %d\n", diff);

    return 0;
}
