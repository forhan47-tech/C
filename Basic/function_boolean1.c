#include <stdio.h>
#include <stdbool.h>

bool isEven(int n) {
    return n % 2 == 0;
}

int main() {
    bool result = isEven(4);
    
    printf("Is even? %s\n", result ? "true" : "false");
    return 0;
}
