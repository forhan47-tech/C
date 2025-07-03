#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare and initialize the array of structures
    struct Person people[3] = {
        {"Alice", 25, 5.6},
        {"Bob", 30, 5.9},
        {"Charlie", 22, 5.7}
    };

    // Display the details of each person
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Age: %d, Height: %.2f\n", people[i].name, people[i].age, people[i].height);
    }

    return 0;
}