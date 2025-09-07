#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

void printData(union Data d) {
    printf("Integer: %d\n", d.i);
    printf("Float: %.2f\n", d.f);
    printf("String: %s\n", d.str);
}

int main() {
    union Data d;
    
    strcpy(d.str, "NAIMUDDIN"); 
    printData(d);                
    return 0;
}
