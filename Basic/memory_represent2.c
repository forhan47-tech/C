#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    printf("Address of first element: %p\n", arr);
    printf("Address using &arr[0]: %p\n", &arr[0]);

    return 0;
}
