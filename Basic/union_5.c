#include <stdio.h>

union Data {
    int intValue;
    float floatValue;
    char name[20];
};

int main() {
    union Data userData;

    printf("Enter an integer: ");
    scanf("%d", &userData.intValue);
    printf("Stored integer: %d\n", userData.intValue);

    printf("Enter a floating-point number: ");
    scanf("%f", &userData.floatValue);
    printf("Stored float: %.2f\n", userData.floatValue);

    printf("Enter a name: ");
    scanf("%s", userData.name);  // Reads only single-word input
    printf("Stored name: %s\n", userData.name);

    return 0;
}

