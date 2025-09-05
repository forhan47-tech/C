#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

struct Student getStudent() {
    struct Student s;
    printf("Enter roll: ");
    scanf("%d", &s.roll);

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    return s;
}

int main() {
    struct Student s1 = getStudent();
    printf("\nRoll: %d, Name: %s, Marks: %.2f\n", s1.roll, s1.name, s1.marks);
    return 0;
}
