#include <stdio.h>

int main() {
    #ifdef _WIN32
        printf("Windows-specific code.\n");
    #elif __linux__
        printf("Linux-specific code.\n");
    #elif __APPLE__
        printf("macOS-specific code.\n");
    #else
        printf("Unknown platform.\n");
    #endif

    return 0;
}

