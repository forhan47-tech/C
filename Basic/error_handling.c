#include <stdio.h>
#include <assert.h>

int divide(int a, int b) {
    assert(b != 0); // stop execution if b is zero
    return a / b;
}

int main() {
    int result = divide(10, 2); 
    printf("Result: %d\n", result); // Ok

    result = divide(10, 0); // ⚠️ Will trigger assertion failure
    printf("Result: %d\n", result);

    return 0;
}
