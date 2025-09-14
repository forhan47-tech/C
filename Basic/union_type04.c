#include <stdio.h>

struct Value {
    int type;  
    union {
        int num;
        float decimal;
    };
};

int main() {
    struct Value v;

    printf("Enter type: ");
    scanf("%d", &v.type);

    if (v.type == 1) {
        v.num = 42;  // Store as integer
        printf("Stored integer: %d\n", v.num);
    }
        
    if (v.type == 2) {
        v.decimal = 3.14;  // Store as float  
        printf("Stored float: %.2f\n", v.decimal);
    }

    return 0;
}
