#include <stdio.h>

typedef enum {
    OK = 0,
    WARNING = 1,
    ERROR = 2
} Status;

Status getStatusFromUser() {
    int input;
    printf("Enter status (0=OK, 1=WARNING, 2=ERROR): ");
    scanf("%d", &input);
    return (Status)input;
}

int main() {
    Status s = getStatusFromUser();

    switch (s) {
        case OK:      printf("Status: OK\n"); break;
        case WARNING: printf("Status: WARNING\n"); break;
        case ERROR:   printf("Status: ERROR\n"); break;
        default:      printf("Invalid status\n");
    }

    return 0;
}
