#include <stdio.h>

int main() {
    #line 100 "myfile.c" // Change the line number and file name for debugging purposes

    printf("This is a custom line number and file name example.\n");
    printf("Current line: %d\n", __LINE__);  
    printf("File name: %s\n", __FILE__);   

    return 0;
}

