#include <stdio.h>

int main() {
    #line 100 "myfile.c" 

    printf("Current line: %d\n", __LINE__);  
    printf("File name: %s\n", __FILE__);   

    return 0;
}

