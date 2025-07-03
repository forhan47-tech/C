
#include <stdio.h>

enum Status { SUCCESS, FAILURE, RUNNING };

// Function to print status
void printStatus(enum Status s) {
    switch (s) {
        case SUCCESS: printf("Operation Successful!\n"); break;
        case FAILURE: printf("Operation Failed!\n"); break;
        case RUNNING: printf("Operation in Progress...\n"); break;
    }
}

int main() {
    enum Status currentStatus = RUNNING;
    printStatus(currentStatus);
    return 0;
}
