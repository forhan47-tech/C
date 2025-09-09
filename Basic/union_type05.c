#include <stdio.h>
#include <string.h>

union Car {
    char name[50];
    int price;
};

int main() {
    union Car c1 = {"Toyota"};
    union Car *ptr = &c1;

    printf("Car Name: %s\n", ptr->name);

    ptr->price = 25000;
    printf("Car Price: %d\n", ptr->price);

    return 0;
}
