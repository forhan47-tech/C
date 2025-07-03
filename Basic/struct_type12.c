#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student students[2];  // Array of structures

    // Taking input for multiple students
    for (int i = 0; i < 2; i++) {
        printf("Enter Name: ");
        scanf("%s", students[i].name);
        printf("Enter Age: ");
        scanf("%d", &students[i].age);
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Displaying data
    printf("\nStudent Records:\n");
    for (int i = 0; i < 2; i++) {
        printf("Name: %s, Age: %d, Marks: %.2f\n", students[i].name, students[i].age, students[i].marks);
    }

    return 0;
}

