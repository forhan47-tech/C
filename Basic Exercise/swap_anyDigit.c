#include <stdio.h>
#include <string.h>

void swapChars(char *numStr, int pos1, int pos2) {
    char temp = numStr[pos1];
    numStr[pos1] = numStr[pos2];
    numStr[pos2] = temp;
}

int main() {
    char numStr[20];
    int pos1, pos2;

    printf("Enter a number: ");
    scanf("%s", numStr);

    printf("Enter first position to swap (0-based index): ");
    scanf("%d", &pos1);

    printf("Enter second position to swap (0-based index): ");
    scanf("%d", &pos2);

    swapChars(numStr, pos1, pos2);

    printf("Modified number: %s\n", numStr);
    return 0;
}
