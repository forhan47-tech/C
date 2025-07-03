#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

// Function to modify student details
void modifyStudent(struct Student *s) {
    s->age += 1;  // Modify structure using pointer
    s->marks += 5;
}

int main() {
    struct Student student1 = {"Alice", 20, 89.5};
    modifyStudent(&student1);  // Pass structure by reference
    printf("Updated Age: %d\n", student1.age);
    printf("Updated Marks: %.2f\n", student1.marks);
    return 0;
}

