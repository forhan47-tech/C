#include <stdio.h>
#include <string.h>

void compareStrings(char s1[], char s2[]) {
    int result = strcmp(s1, s2);

    if (result == 0)
        printf("Strings are equal.\n");
    else if (result < 0)
        printf("'%s' is less than '%s'\n", s1, s2);
    else
        printf("'%s' is greater than '%s'\n", s1, s2);
}

int main() {
    char a[] = "Apple";
    char b[] = "Banana";
    
    compareStrings(a, b);
    return 0;
}
