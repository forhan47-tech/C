#include <stdio.h>

enum Level { 
    LOW = 10, MEDIUM = 20, HIGH = 30 
};

int main() {
    enum Level l = MEDIUM;
    
    printf("Level value: %d\n", l);  
    return 0;
}
