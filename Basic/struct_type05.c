#include <stdio.h>
#include <string.h>

struct Car {
    char model[50];
    int year;
};

int main() {
    struct Car c1 = {"Toyota Corolla", 2020};
    struct Car *ptr = &c1;

    printf("Model: %s\n", ptr->model);
    printf("Year: %d\n", ptr->year);

    return 0;
}
