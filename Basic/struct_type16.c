#include <stdio.h>

struct Student {
    char name[50];
    int age;
    int marks[3];  // Array inside structure
};

int main() {
    struct Student s1;

    // Taking input
    printf("Enter name: ");
    scanf("%s", s1.name);

    printf("Enter age: ");
    scanf("%d", &s1.age);

    printf("Enter three marks: ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &s1.marks[i]);  // Input marks
    }

    printf("\nStudent Details:\n");
    printf("Name: %s\nAge: %d\nMarks: %d, %d, %d\n", s1.name, s1.age, s1.marks[0], s1.marks[1], s1.marks[2]);

    return 0;
}
