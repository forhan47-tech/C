#include <stdio.h>
#include <string.h>

void compressString(char *str) {
    int len = strlen(str);
    int count = 1;

    for (int i = 0; i < len; i++) {
        if (str[i] == str[i + 1]) {
            count++;
        } else {
            printf("%c", str[i]);
            if (count > 1) {
                printf("%d", count);
            }
            count = 1;
        }
    }
    printf("\n");
}

int main() {
    char str[] = "aaabbccccdd";
    printf("Compressed String: ");
    compressString(str);
    return 0;
}
