#include <stdio.h>

union Value {
    int i;
    float f;
};

void inputInt(union Value *v) {
    printf("Enter an integer: ");
    scanf("%d", &v->i);
}

void inputFloat(union Value *v) {
    printf("Enter a float: ");
    scanf("%f", &v->f);
}

int main() {
    union Value val;

    inputInt(&val);
    printf("Integer: %d\n", val.i);

    inputFloat(&val);
    printf("Float: %.2f\n", val.f);

    return 0;
}
