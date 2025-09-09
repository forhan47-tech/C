#include <stdio.h>

int main() {
    char *str[] = {"Hello", "World", "C"};

    printf("Second string: %s\n", str[1]); 

    for (int i = 0; i < 3; i++) {
        printf("Language %d: %s\n", i + 1, str[i]);
    }
    return 0;
}
