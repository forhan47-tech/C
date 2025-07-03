#include <stdio.h>

int main() {
    // Set the line number to 100 and file name to "myfile.c"
    #line 100 "myfile.c"

    // Display the current line number and file name
    printf("Current line: %d\n", __LINE__);  // Outputs: Current line: 100
    printf("File name: %s\n", __FILE__);    // Outputs: File name: myfile.c

    return 0;
}

