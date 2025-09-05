#include <stdio.h>

typedef enum {
    SUCCESS,
    FAILURE
} Status;

Status checkValue(int x) {
    if (x > 0)
        return SUCCESS;
    else
        return FAILURE;
}

int main() {
    Status result = checkValue(-5);

    if (result == SUCCESS)
        printf("Operation succeeded\n");
    else
        printf("Operation failed\n");
    
    return 0;
}
