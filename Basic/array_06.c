#include <stdio.h>

int main() {
    int array[5] = {[0] = 10, [2] = 20, [4] = 30};

    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }
    return 0;
}