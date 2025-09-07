#include <stdio.h>

int main() {
    int n = 0;

    if (n == 0)
        goto jump_here; // jump to label

    printf("You entered: %d\n", n);

jump_here: 
    printf("Exiting the program.\n");
    return 0;
}
