#include <stdio.h>

enum Days {
    MONDAY, TUESDAY, WEDNESDAY 
};

int main() {
    enum Days firstDay = MONDAY, lastDay = WEDNESDAY;  

    printf("First Day: %d\n", firstDay);  
    printf("Last Day: %d\n", lastDay);   

    return 0;
}