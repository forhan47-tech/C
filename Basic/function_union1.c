#include <stdio.h>

union Data {
    int intValue;
    float floatValue;
};

union Data getData(int type) {
    union Data d;
    
    if (type == 1) {
        d.intValue = 42;
    } else {
        d.floatValue = 9.99;
    }
    
    return d;
}

int main() {
    union Data d = getData(2);
    printf("Float Value: %.2f\n", d.floatValue);
    return 0;
}

