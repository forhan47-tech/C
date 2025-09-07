#include <stdio.h>

void changeString(char **str) {
    *str = "Modified String"; 
}

int main() {
    char *str = "Original String";

    printf("Before: %s\n", str);

    changeString(&str);

    printf("After: %s\n", str);
    return 0;
}
