#include <stdio.h>

int main() {
    int num;
    char ch;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    getchar(); // Consume leftover '\n'

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("Character entered: %c\n", ch);
    return 0;
}
