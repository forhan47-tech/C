#include <stdio.h>

enum Days {
    MONDAY,    // 0
    TUESDAY,   // 1
    WEDNESDAY  // 2
};

int main() {
    enum Days firstDay = MONDAY, lastDay = WEDNESDAY;  // Initialize both

    printf("First Day: %d\n", firstDay);  // Prints: 0
    printf("Last Day: %d\n", lastDay);    // Prints: 2

    return 0;
}