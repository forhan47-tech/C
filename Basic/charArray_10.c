#include <stdio.h>

int main() {
    char str[100];

    printf("Enter text (Ctrl+D or EOF to stop):\n");

    while (fgets(str, sizeof(str), stdin) != NULL) {  // Reads until EOF
        printf("You entered: %s", str);
    }

    printf("Input ended.\n");
    return 0;
}
