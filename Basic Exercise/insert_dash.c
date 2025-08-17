#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000], result[2000];
    int idx = 0;

    printf("Enter a string of digits: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') str[--len] = '\0';

    for (int i = 0; i < len; i++) {
        result[idx++] = str[i];

        if (isdigit(str[i]) && isdigit(str[i + 1])) {
            int d1 = str[i] - '0';
            int d2 = str[i + 1] - '0';

            if (d1 % 2 == 1 && d2 % 2 == 1) {
                result[idx++] = '-';
            }
        }
    }

    result[idx] = '\0';

    printf("\nModified string:\n%s\n", result);
    return 0;
}
