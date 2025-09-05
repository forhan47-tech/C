#include <stdio.h>

struct Student {
    int rollNo;
    union {
        int marks;
        float grade;
    };  // Anonymous union
};

int main() {
    struct Student s;
    s.rollNo = 101;
    s.marks = 95;

    printf("Roll: %d, Marks: %d\n", s.rollNo, s.marks);
    return 0;
}
