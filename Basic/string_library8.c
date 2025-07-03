#include <string.h>
#include <stdio.h>

int main() {
    char str[] = "Hello,World,Programming";
    char *token = strtok(str, ","); // Split by comma

    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, ",");
    }
    return 0;
}