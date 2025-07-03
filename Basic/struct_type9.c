#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Student {
    char name[50];
    int age;
    struct Date dob;
};

int main() {
    struct Student student1 = {
        .name = "Bob",
        .age = 22,
        .dob = {.day = 10, .month = 8, .year = 2000}  // Using designated initializers
    };

    // Printing student details
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Date of Birth: %d/%d/%d\n", student1.dob.day, student1.dob.month, student1.dob.year);

    return 0;
}

