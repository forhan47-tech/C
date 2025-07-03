#include <stdio.h>
#include <stdbool.h>

void printStatus(bool status) {
    if (status)
        printf("System is ON.\n");
    else
        printf("System is OFF.\n");
}

int main() {
    printStatus(true);   // Will print: System is ON.
    printStatus(false);  // Will print: System is OFF.
    return 0;
}
