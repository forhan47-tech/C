#include <stdio.h>

int main() {
    // Basic text formatting and escape sequences
    printf("Escape Sequences Demo:\n");
    printf("1.\tNewline: Hello\nWorld!\n");   // Newline
    printf("2.\tTab: Column1\tColumn2\tColumn3\n");  // Tab
    printf("3.\tSingle quote: It\'s C programming!\n");  // Single quote
    printf("4.\tDouble quote: \"Quoted Text\"\n");  // Double quote
    printf("5.\tBackslash: Path -> C:\\ProgramFiles\\C\\test\n");  // Backslash
    printf("6.\tQuestion mark: Are you okay?\n");  // Using question mark directly

    
    // Carriage return
    printf("8.\tCarriage return: Start\rOverwrite\n");  // Moves to the beginning of the line

    // Backspace
    printf("9.\tBackspace: ABC\b\bD\n");  // Removes last two characters and replaces with D

    // Hexadecimal and Octal
    printf("10.\tHexadecimal (A): %c\n", '\x41');  // Hexadecimal ASCII for 'A'
    printf("11.\tOctal (A): %c\n", '\101');       // Octal ASCII for 'A'

    // Null character
    char str[] = "Hello\0World!";
    printf("12.\tNull character in string: %s\n", str);  // Stops at the null character

    // Vertical tab
    printf("13.\tVertical tab: Line 1\vLine 2\vLine 3\n");

    // Form feed
    printf("14.\tForm feed: First\fSecond\fThird\n");

    return 0;
}