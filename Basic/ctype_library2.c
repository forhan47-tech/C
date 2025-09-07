#include <stdio.h>
#include <ctype.h>

int main() {
    char ctrl = '\n', printable = 'A', hex = 'F', space = ' ';

    printf("iscntrl('\\n'): %d\n", iscntrl(ctrl));     // Control character
    printf("isprint('%c'): %d\n", printable, isprint(printable)); // Printable
    printf("isgraph('%c'): %d\n", printable, isgraph(printable)); // Visible (non-space)
    printf("isxdigit('%c'): %d\n", hex, isxdigit(hex)); // Hex digit

    return 0;
}
