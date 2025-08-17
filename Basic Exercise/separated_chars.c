#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') str[--len] = '\0';

    for (int i = 0; i < len - 3; i++) {
        if ((str[i] == 'e' && str[i + 3] == 'g') ||
            (str[i] == 'g' && str[i + 3] == 'e')) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("\nFound 'e' and 'g' separated by exactly 2 characters.\n");
    else
        printf("\nNo such separation found.\n");

    return 0;
}
