#include <stdio.h>

union Data {
    int intValue;
    float floatValue;
};

// Function to print union data
void printData(union Data d, int type) {
    if (type == 1) {
        printf("Integer: %d\n", d.intValue);
    } else if (type == 2) {
        printf("Float: %.2f\n", d.floatValue);
    }
}

int main() {
    union Data data1;
    
    data1.intValue = 100;
    printData(data1, 1);  // Prints integer

    data1.floatValue = 5.5;
    printData(data1, 2);  // Prints float (memory overwritten)

    return 0;
}

