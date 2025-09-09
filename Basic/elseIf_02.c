#include <stdio.h>

int main() {
    int age = 25;
    char gender = 'M';

    // Nested if-else statements
    if (age > 18) { 
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