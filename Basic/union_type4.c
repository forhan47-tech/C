#include <stdio.h>

struct Value {
    int type;  // 1 = int, 2 = float
    union {
        int num;
        float decimal;
    };
};

int main() {
    struct Value v;

    printf("Enter type: ");
    scanf("%d", &v.type);

    v.num = 42;  // Store as integer
    if (v.type == 1)
        printf("Stored integer: %d\n", v.num);
       
    v.decimal = 3.14;  // Store as float  
    if (v.type == 2)
        printf("Stored float: %.2f\n", v.decimal);

    return 0;
}
