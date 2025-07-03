#include <stdio.h>

enum Status {
    SUCCESS,     // Automatically assigned 0
    FAILURE,     // Automatically assigned 1
    PENDING      // Automatically assigned 2
};

int main() {
    enum Status currentStatus = SUCCESS;  // You can change this to FAILURE or PENDING to test

    // Check the status and display the corresponding message
    if (currentStatus == SUCCESS) {
        printf("Operation succeeded!\n");
    } else if (currentStatus == FAILURE) {
        printf("Operation failed.\n");
    } else {
        printf("Operation is still pending.\n");
    }

    return 0;
}