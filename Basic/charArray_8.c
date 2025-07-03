#include <stdio.h>

int main() {
    // Demonstrating character arrays
    char arr[] = "Hello";   // Can be modified
    arr[0] = 'M';

    printf("%s\n", arr);  // Output: Mello

    // Demonstrating string literals
    char *ptr = "Hello";   // Stored in read-only memory
    // ptr[0] = 'M';  ❌ Causes Undefined Behavior
    ptr = "World";  // ✅ Pointer can be reassigned

    printf("%s\n", ptr);  // Output: World

    return 0;
}
