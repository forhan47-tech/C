#include <stdio.h>
#include <string.h>

struct Date {
    int day, month, year;
};

struct Employee {
    char name[50];
    struct Date joiningDate;
};

int main() {
    struct Employee e1;

    strcpy(e1.name, "NAIMUDDIN");
    e1.joiningDate.day = 5;
    e1.joiningDate.month = 9;
    e1.joiningDate.year = 2025;

    printf("Employee: %s\n", e1.name);
    printf("Joining Date: %02d/%02d/%d\n", e1.joiningDate.day, e1.joiningDate.month, e1.joiningDate.year);

    return 0;
}

