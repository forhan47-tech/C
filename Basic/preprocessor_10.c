#include <stdio.h>

#ifndef TARGET_OS
    #error "TARGET_OS must be defined. Use -DTARGET_OS=\"Linux\" when compiling."
#endif

int main() {
    printf("Running on %s\n", TARGET_OS);
    return 0;
}
