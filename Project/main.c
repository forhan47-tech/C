#include "mathops.h"
#include "display.h"

int main() {
    int a = 6, b = 4;

    int sum = add(a, b);
    int product = multiply(a, b);

    show_result("Sum", sum);
    show_result("Product", product);
    return 0;
}
