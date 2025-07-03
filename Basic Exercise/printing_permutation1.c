#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void permuteArray(int arr[], int left, int right) {
    if (left == right) {
        for (int i = 0; i <= right; i++)
            printf("%d ", arr[i]);
        printf("\n");
        return;
    }

    for (int i = left; i <= right; i++) {
        swap(&arr[left], &arr[i]);
        permuteArray(arr, left + 1, right);
        swap(&arr[left], &arr[i]); // Backtrack
    }
}

int main() {
    int arr[] = {1, 2, 3};
    permuteArray(arr, 0, 2);
    return 0;
}
