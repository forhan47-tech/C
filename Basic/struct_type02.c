#include <stdio.h>

typedef struct {
    char name[50];
    int age;
} Person;

int main() {
    Person p1 = {"NAIMUDDIN", 28};

    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);

    return 0;
}
