#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[50];
    struct Date dob;
};

int main() {
    struct Student s = {"NAIMUDDIN", {5, 9, 2025}};

    printf("Name: %s\n", s.name);
    printf("DOB: %02d-%02d-%d\n", s.dob.day, s.dob.month, s.dob.year);

    return 0;
}
