#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = 'A', digit = '5', space = ' ', punct = '!';

    printf("isalnum('%c'): %d\n", ch, isalnum(ch));   // Alphanumeric
    printf("isalpha('%c'): %d\n", ch, isalpha(ch));   // Alphabet
    printf("isdigit('%c'): %d\n", digit, isdigit(digit)); // Digit
    printf("islower('%c'): %d\n", ch, islower(ch));   // Lowercase
    printf("isupper('%c'): %d\n", ch, isupper(ch));   // Uppercase
    printf("isspace('%c'): %d\n", space, isspace(space)); // Whitespace
    printf("isblank('%c'): %d\n", space, isblank(space)); // Space or tab
    printf("ispunct('%c'): %d\n", punct, ispunct(punct)); // Punctuation

    return 0;
}
