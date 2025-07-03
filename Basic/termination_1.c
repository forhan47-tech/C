#include <stdio.h>

int main() {
    int condition = 1;

    if (condition) {
        printf("Exiting program early.\n");
        return 1;  // Return non-zero to indicate an error
    }

    printf("Program ended normally.\n");
    return 0;     // Indicates successful completion

}