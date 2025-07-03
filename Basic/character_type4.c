#include <stdio.h>

int main() {
    int ch;
    
    printf("Enter characters (Ctrl+D or Ctrl+Z to stop):\n");

    while ((ch = getchar()) != EOF) {
        putchar(ch); // Echo the input
    }

    printf("\nEnd of file reached.\n");
    return 0;
}

