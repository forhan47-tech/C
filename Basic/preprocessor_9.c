#include <stdio.h>

#define MODE "DEV"

#ifdef MODE
    #undef MODE
    #define MODE "PROD"
#endif

int main() {
    printf("Application running in %s mode\n", MODE);
    return 0;
}
