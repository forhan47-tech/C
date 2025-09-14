#include <stdio.h>

union Data {
    int id;
    float salary;
};

void display(union Data e) {
    printf("ID: %d\n", e.id);
    printf("Salary: %.2f\n", e.salary);
}

int main() {
    union Data employee;
    employee.id = 101;
    
    // Calling function (passing by value)
    display(employee);

    employee.salary = 50000.75;  // Overwrites ID
    display(employee);

    return 0;
}
