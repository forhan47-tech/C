#include <stdio.h>
#include <stdbool.h>

bool isPositive(int number) {
    return number > 0;
}

int main() {
    printf("Is positive? %s\n", isPositive(-5) ? "true" : "false");
    return 0;
}
