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
    printf("Name: %s\n", people[0].name);   // Accessing the first person's name
    printf("Age: %d\n", people[1].age);    // Accessing the second person's age
    printf("Height: %.2f\n", people[2].height); // Accessing the third person's height
    
    return 0;
}