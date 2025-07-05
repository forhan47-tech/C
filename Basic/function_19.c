#include <stdio.h>

void showLocal() {
    int value = 42;  // Local variable to showLocal
    printf("Inside showLocal: value = %d\n", value);
}

int main() {
    showLocal();

    // Trying to access 'value' here will cause an error
    // printf("%d", value);  // ❌ Error: ‘value’ is not declared in this scope

    return 0;
}
