#include <stdio.h>

void modifyString(char str[]) {
    str[2] = 'o';
}

int main() {
    char text[] = "hello world";

    modifyString(text);
    
    printf("Uppercase: %s\n", text);
    return 0;
}
