#include <stdio.h>

void changeString(char **str) {
    *str = "Modified String"; // Modify the original pointer
}

int main() {
    char *str = "Original String";
    printf("Before: %s\n", str);

    changeString(&str); // Pass pointer to pointer
    printf("After: %s\n", str);

    return 0;
}
