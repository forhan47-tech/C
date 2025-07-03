#include <stdio.h>

void swapPointers(char **str1, char **str2) {
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp; 
}

int main() {
    char *str1 = "Hello";
    char *str2 = "World";

    swapPointers(&str1, &str2); // Passing addresses of pointers
    printf("After Swap: str1 = %s, str2 = %s\n", str1, str2); 

    return 0;
}
