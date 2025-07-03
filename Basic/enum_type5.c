#include <stdio.h>

typedef enum {
    SUCCESS,  // Automatically assigned 0
    FAILURE,  // Automatically assigned 1
    PENDING   // Automatically assigned 2
} Status;

int main() {
    Status currentStatus = SUCCESS;  // Declare and initialize an enum variable using 'Status'

    // Check the status and print appropriate messages
    if (currentStatus == SUCCESS) {
        printf("Operation succeeded!\n");
    } else if (currentStatus == FAILURE) {
        printf("Operation failed.\n");
    } else {
        printf("Operation is still pending.\n");
    }

    return 0;
}