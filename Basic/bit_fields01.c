#include <stdio.h>

struct StatusFlags {
    unsigned int isVisible : 1;
    unsigned int isActive  : 1;
    unsigned int errorCode : 4; // 4 bits for error codes
};

int main() {
    struct StatusFlags flag = {1, 0, 7};

    printf("Active: %u\n", flag.isActive);
    printf("Visible: %u\n", flag.isVisible);
    printf("Error Code: %u\n", flag.errorCode);

    printf("Size of struct: %lu bytes\n", sizeof(flag));

    return 0;
}
