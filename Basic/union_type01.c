#include <stdio.h>

union Data {
    int id;
    float salary;
};

int main() {
    union Data emp;  // Declare union variable
    
    emp.id = 101;  // Assign value to id
    printf("Employee ID: %d\n", emp.id);

    emp.salary = 50000.75;  // Assign salary (overwrites id)
    printf("Employee Salary: %.2f\n", emp.salary);
    return 0;
}
