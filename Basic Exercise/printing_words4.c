#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello,World Programming";
    char *token = strtok(str, " ,");  // Split by both space and comma

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ,");
    }

    return 0;
}
