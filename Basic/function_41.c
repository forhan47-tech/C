#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 12, y = 9;
    
    printf("Max is: %d\n", max(x, y));
    return 0;
}
