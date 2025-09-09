#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isSunny = true;
    bool haveUmbrella = false;

    // Logical AND (&&)
    if (isSunny && !haveUmbrella) {
        printf("It's sunny, but you don't have an umbrella!\n");
    }

    // Logical OR (||)
    if (isSunny || haveUmbrella) {
        printf("Either it's sunny or you have an umbrella.\n");
    }

    // Logical NOT (!)
    if (!haveUmbrella) {
        printf("You don't have an umbrella!\n");
    }

    return 0;
}
