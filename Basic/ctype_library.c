#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = ' '; // Example character to test

    // Character classification functions
    if (isalnum(ch)) {
        printf("'%c' is an alphanumeric character.\n", ch);
    }
    if (isalpha(ch)) {
        printf("'%c' is an alphabetic character.\n", ch);
    }
    if (isdigit(ch)) {
        printf("'%c' is a numeric digit.\n", ch);
    }
    if (isxdigit(ch)) {
        printf("'%c' is a hexadecimal digit.\n", ch);
    }
    if (islower(ch)) {
        printf("'%c' is a lowercase letter.\n", ch);
    }
    if (isupper(ch)) {
        printf("'%c' is an uppercase letter.\n", ch);
    }
    if (isspace(ch)) {
        printf("'%c' is a whitespace character.\n", ch);
    }
    if (isblank(ch)) {
        printf("'%c' is a blank character (space or horizontal tab).\n", ch);
    }
    if (ispunct(ch)) {
        printf("'%c' is a punctuation character.\n", ch);
    }
    if (iscntrl(ch)) {
        printf("'%c' is a control character.\n", ch);
    }
    if (isprint(ch)) {
        printf("'%c' is a printable character.\n", ch);
    }
    if (isgraph(ch)) {
        printf("'%c' is a graphical character (printable and not a space).\n", ch);
    }

    // Character transformation functions
    char lower = tolower(ch);
    printf("Lowercase: '%c'.\n", lower);

    char upper = toupper(lower);
    printf("Uppercase: '%c'.\n", upper);

    return 0;
}