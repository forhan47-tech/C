#include <stdio.h>

union Data {
    int id;
    float salary;
};

// Function to display union data
void display(union Data e) {
    printf("ID: %d, Salary: %.2f\n", e.id, e.salary);
}

int main() {
    union Data employee;
    employee.id = 102;
    display(employee);
    
    employee.salary = 60000.80;
    display(employee);  // ID value is overwritten
    
    return 0;
}

