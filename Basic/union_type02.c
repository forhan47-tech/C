#include <stdio.h>

typedef union {
    int id;
    float salary;
} Data;

int main() {
    Data emp;  // Declare union variable using typedef
    
    emp.id = 101;  // Assign value to id
    printf("Employee ID: %d\n", emp.id);

    emp.salary = 50000.75;  // Assign salary (overwrites id)
    printf("Employee Salary: %.2f\n", emp.salary);

    return 0;
}
