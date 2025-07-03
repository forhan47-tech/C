#include <stdio.h>  
#include <stdbool.h> // Include stdbool.h for the bool data type

int main() {
    bool isValid = true; 

    if (isValid) {
        printf("The value is valid.\n");
    } else {
        printf("Unhandled state of isValid.\n");
    }

    return 0; 
} 