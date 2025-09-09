#include <stdio.h>

int main() {
    // character arrays
    char arr[] = "Hello";   // Can be modified

    arr[0] = 'M';
    printf("%s\n", arr); 


    // string literals
    char *ptr = "Hello"; 

    // ptr[0] = 'M';  ❌ Causes Undefined Behavior
    ptr = "World";  // ✅ Pointer can be reassigned

    printf("%s\n", ptr); 

    return 0;
}
