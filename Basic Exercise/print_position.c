#include <stdio.h>

int main() {
    int arr[10];

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Positions and values of elements < 5:\n");
    for (int i = 0; i < 10; i++) {
        if (arr[i] < 5)
            printf("Index %d => Value %d\n", i, arr[i]);
    }

    return 0;
}
