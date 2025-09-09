#include <stdio.h>

void show() {
    int localVar = 10;  // Local variable
    printf("Inside show(): localVar = %d\n", localVar);
}

int main() {
    show();
    // printf("%d", localVar);  // ❌ Error: localVar is not visible here
    return 0;
}
