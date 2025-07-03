#include <stdio.h>

// Define a union
union Data {
    int num;
    float decimal;
    char letter;
};

int main() {
    union Data d1; // Declare a union variable

    d1.num = 10; // Assign value to num
    printf("Number: %d\n", d1.num);

    d1.decimal = 5.5; // Assign value to decimal (overwrites num)
    printf("Decimal: %.2f\n", d1.decimal);

    d1.letter = 'A'; // Assign value to letter (overwrites decimal)
    printf("Letter: %c\n", d1.letter);

    return 0;
}
