#include <stdio.h>

char* getMessage() {
    static char msg[] = "Static storage example";
    return msg;
}

int main() {
    char* message = getMessage();  // Store returned string in a variable
    printf("Message: %s\n", message);  // Print using the variable
    
    return 0;
}

