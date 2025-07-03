#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp1 = {101, "Alice", 55000.50};
    struct Employee emp2 = {.name = "Bob"};

    // Printing employee details
    printf("Employee 1: ID = %d, Name = %s, Salary = %.2f\n", emp1.id, emp1.name, emp1.salary);
    printf("Employee 2: ID = %d, Name = %s, Salary = %.2f\n", emp2.id, emp2.name, emp2.salary);

    return 0;
}

