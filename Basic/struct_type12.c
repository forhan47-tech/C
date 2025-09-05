#include <stdio.h>
#include <string.h>

struct Subject {
    char name[30];
    int marks;
};

struct Student {
    char name[50];
    struct Subject subjects[3];  // Array of nested structs
};

int main() {
    struct Student s = {"NAIMUDDIN", {
        {"Math", 95},
        {"Physics", 90},
        {"Chemistry", 92}
    }};

    printf("Student: %s\n", s.name);
    for (int i = 0; i < 3; i++) {
        printf("Subject: %s, Marks: %d\n", s.subjects[i].name, s.subjects[i].marks);
    }

    return 0;
}
