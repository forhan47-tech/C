#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr1 = &arr[1];  // Points to the second element
    int *ptr2 = &arr[3];  // Points to the fourth element

    if (ptr1 < ptr2) {
        printf("ptr1 points to an earlier element in the array than ptr2.\n");
    }

    if (ptr2 > ptr1) {
        printf("ptr2 points to a later element in the array than ptr1.\n");
    }

    return 0;
}