#include <stdio.h>

int main() {
    if (rename("oldname.txt", "newname.txt") == 0) {
        printf("File renamed successfully.\n");
    } else {
        perror("Error renaming file");
    }
    return 0;
}