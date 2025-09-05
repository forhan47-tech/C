#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data d;

    printf("Enter an integer: ");
    scanf("%d", &d.i);
    printf("You entered: %d\n", d.i);

    printf("Enter a float: ");
    scanf("%f", &d.f);
    printf("You entered: %.2f\n", d.f);

    printf("Enter a string: ");
    scanf("%s", d.str);
    printf("You entered: %s\n", d.str);

    return 0;
}
