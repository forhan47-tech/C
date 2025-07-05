#include <stdio.h>

struct Status {
    unsigned int isActive   : 1;
    unsigned int isVisible  : 1;
    unsigned int errorCode  : 4;
    unsigned int reserved   : 2;
};

int main() {
    struct Status panel = {1, 0, 7, 0};

    printf("Active: %u\n", panel.isActive);
    printf("Visible: %u\n", panel.isVisible);
    printf("Error Code: %u\n", panel.errorCode);
    printf("Size of struct: %lu bytes\n", sizeof(panel));

    return 0;
}
