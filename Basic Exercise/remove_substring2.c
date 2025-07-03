#include <stdio.h>
#include <string.h>

void removeSubstring(char *str, const char *sub) {
    int subLen = strlen(sub);
    char *pos;

    while ((pos = strstr(str, sub)) != NULL) {
        memmove(pos, pos + subLen, strlen(pos + subLen) + 1);
    }
}

int main() {
    char str[] = "abcxyzabcxyzabc";
    char sub[] = "abc";

    removeSubstring(str, sub);
    printf("Updated String: %s\n", str);

    return 0;
}
