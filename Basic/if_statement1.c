#include <stdio.h>

int main() {
    int age = 25;
    char gender = 'M';

    // Check if the person is an adult
    if (age > 18) {
        // Nested condition to check gender
        if (gender == 'M') {
            printf("You are an adult male.\n");
        } else {
            printf("You are an adult female.\n");
        }
    } else {
        printf("You are not an adult.\n");
    }

    return 0;
}