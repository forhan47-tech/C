#include <stdio.h>
#include <assert.h>

void testAdd() {
    assert(2 + 2 == 4);   // passes
    assert(5 - 3 == 2);   // passes
    // assert(2 * 2 == 5); // Uncommenting this would fail and abort the program
}

int main() {
    testAdd();
    printf("All tests passed!\n");
    return 0;
}
