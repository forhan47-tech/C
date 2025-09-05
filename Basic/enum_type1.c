#include <stdio.h>

enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    enum Day today = WEDNESDAY;
    printf("Day index: %d\n", today);  // Output: 3
    return 0;
}
