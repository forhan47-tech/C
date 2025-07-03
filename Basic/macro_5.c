#include <stdio.h>

#define DEBUG_PRINT(msg) \
    printf("DEBUG - File: %s, Line: %d, Date: %s, Time: %s, Message: %s\n", __FILE__, __LINE__, __DATE__, __TIME__, msg)

int main() {
    DEBUG_PRINT("This is a debug message.");
    return 0;
}