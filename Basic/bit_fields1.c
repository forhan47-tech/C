#include <stdio.h>

struct StatusFlags {
    unsigned int isVisible : 1;
    unsigned int isActive  : 1;
    unsigned int errorCode : 4; // 4 bits for error codes
};

int main() {
    struct StatusFlags flag = {1, 0, 7};
    printf("Visible: %d, Active: %d, ErrorCode: %d\n", flag.isVisible, flag.isActive, flag.errorCode);
    return 0;
}
