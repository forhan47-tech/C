#include <stdio.h>

enum Status {
    SUCCESS = 1,  // Assigned value 1
    FAILURE = -1, // Assigned value -1
    PENDING = 0   // Assigned value 0
};

int main() {
    // Check if PENDING is equal to 0 and print a message accordingly
    if (PENDING == 0) {
        printf("Operation is pending.\n");
    }

    return 0;
}