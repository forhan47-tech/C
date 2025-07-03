#include <stdio.h>

// Define enum
enum Status { Success, Failure };

// Function to display status message
void printStatus(enum Status s) {
    if (s == Success) {
        printf("Operation was successful!\n");
    } else {
        printf("Operation failed!\n");
    }
}

int main() {
    enum Status result = Success;

    // Pass enum value to function
    printStatus(result);

    return 0;
}

