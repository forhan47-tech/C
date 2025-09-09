#include <stdio.h>

int main() {
    int arr[3] = {7, 8, 9};
    int (*ptr)[3] = &arr;

    for (int i = 0; i < 3; i++) {
        printf("(*ptr)[%d] = %d\n", i, (*ptr)[i]);
    }

    return 0;
}
