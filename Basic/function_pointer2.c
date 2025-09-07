#include <stdio.h>

char* getMessage() {
    static char msg[] = "Static storage example";
    return msg;
}

int main() {
    char* message = getMessage(); 

    printf("Message: %s\n", message);      
    return 0;
}

