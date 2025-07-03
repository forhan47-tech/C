#include <stdio.h>

int main() {
    int arr[10];
    
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] <= 0)
            arr[i] = 100;
    }

    printf("Modified array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
