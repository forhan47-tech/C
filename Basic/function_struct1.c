#include <stdio.h>

struct Person {
    char name[50];
    int age;
    float height;
};

void display(struct Person p) {
    printf("Name: %s, Age: %d, Height: %.2f\n", p.name, p.age, p.height);
}

int main() {
    struct Person person1 = {"Alice", 25, 5.6};
    display(person1);  // Pass by value
    return 0;
}

