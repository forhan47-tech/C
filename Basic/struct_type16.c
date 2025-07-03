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

    // Displaying information
    printf("\nStudent Details:\n");
    printf("Name: %s\nAge: %d\nMarks: %d, %d\n", s1.name, s1.age);

    for (int i = 0; i < 3; i++) {
        printf("Mark %d: %d\n", i + 1, s1.marks[i]);  // Display each mark
    }
    
    printf("Total Marks: %d\n", s1.marks[0] + s1.marks[1] + s1.marks[2]);  // Calculate total marks

    return 0;
}

