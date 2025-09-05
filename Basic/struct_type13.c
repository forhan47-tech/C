#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Student {
    char name[50];
    struct Date dob;
};

int main() {
    struct Student s;

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter DOB (dd mm yyyy): ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

    printf("\nName: %s\nDOB: %02d-%02d-%d\n", s.name, s.dob.day, s.dob.month, s.dob.year);
    return 0;
}
