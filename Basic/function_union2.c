#include <stdio.h>
#include <string.h>

union Data {
    int i;
    char str[20];
};

void updateData(union Data *d) {
    d->i = 2025;
}

int main() {
    union Data d;
    strcpy(d.str, "NAIMUDDIN");  

    updateData(&d);         
    printf("Updated Integer: %d\n", d.i);
    return 0;
}

