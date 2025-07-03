#include <stdio.h>

union Data {
    int numbers[5];  // Array inside a union
    float average;
};

int main() {
    union Data d;
    
    d.numbers[0] = 10;
    d.numbers[1] = 20;
    
    // Display array values
    printf("Array values in union:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", d.numbers[i]);
    }
    printf("\n");

    // Assign a float value (overwrites array)
    d.average = 30.5;
    printf("Average stored: %.2f\n", d.average);

    return 0;
}

