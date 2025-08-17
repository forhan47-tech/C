#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int sum = 0, num = 0, inNumber = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            num = num * 10 + (str[i] - '0');
            inNumber = 1;
        } else {
            if (inNumber) {
                sum += num;
                num = 0;
                inNumber = 0;
            }
        }
    }

    // Final number if string ends with digits
    if (inNumber) sum += num;

    printf("\nSum of numbers in the string: %d\n", sum);
    return 0;
}
