#include <stdio.h>

int main() {
    char mainStr[1000], subStr[1000];
    int i, j, found = 0;

    printf("Enter the main string: ");
    fgets(mainStr, sizeof(mainStr), stdin);

    printf("Enter the substring to search: ");
    fgets(subStr, sizeof(subStr), stdin);

    // Manual substring search
    for (i = 0; mainStr[i] != '\0'; i++) {
        for (j = 0; subStr[j] != '\0'; j++) {
            if (mainStr[i + j] != subStr[j])
                break;
        }
        if (subStr[j] == '\0') {
            found = 1;
            break;
        }
    }

    if (found)
        printf("\nSubstring found!\n");
    else
        printf("\nSubstring NOT found.\n");

    return 0;
}
