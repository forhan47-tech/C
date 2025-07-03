#include <stdio.h>

struct Student {
    char name[50];
    int age;
    int marks[3];  // Array inside structure
};

int main() {
    // Initializing structure directly
    struct Student s1 = {"Alice", 20, {85, 90, 88}};

    // Displaying information
    printf("\nStudent Details:\n");
    printf("Name: %s\nAge: %d\nMarks: %d, %d, %d\n", s1.name, s1.age, s1.marks[0], s1.marks[1], s1.marks[2]);

    return 0;
}

