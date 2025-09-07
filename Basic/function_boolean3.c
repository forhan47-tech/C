#include <stdio.h>
#include <stdbool.h>

void printStatus(bool status) {
    if (status)
        printf("System is ON.\n");
    else
        printf("System is OFF.\n");
}

int main() {
    printStatus(true);   
    printStatus(false);  
    return 0;
}
