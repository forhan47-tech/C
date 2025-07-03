#include <stdio.h>

int main() {
    printf("Before the jump.\n");
    goto label; // Jump to the label

    printf("This line will be skipped.\n");

label:
    printf("After the jump.\n");
    return 0;
}