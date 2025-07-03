#include <stdio.h>

enum ErrorCodes {
    NOT_FOUND = 404,        // Represents HTTP 404 error: Not Found
    SERVER_ERROR = 500,     // Represents HTTP 500 error: Internal Server Error
    BAD_REQUEST = 400       // Represents HTTP 400 error: Bad Request
};

int main() {
    enum ErrorCodes error = SERVER_ERROR;  // Initialize with SERVER_ERROR
    printf("Error Code: %d\n", error);     // Prints the associated value (500)

    // Change the error code to NOT_FOUND
    error = NOT_FOUND;
    printf("Error Code: %d\n", error);     // Prints the associated value (404)

    return 0;
}