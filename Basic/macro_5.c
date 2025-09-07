#include <stdio.h>

#define LOG(var) printf(#var " = %d\n", var)

int main() {
    int score = 42;
    int lives = 3;

    LOG(score); 
    LOG(lives); 

    return 0;
}
