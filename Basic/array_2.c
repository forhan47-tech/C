#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Reversed array: ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
