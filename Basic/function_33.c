#include <stdio.h>

union Data {
    int id;
    float salary;
};

void modify(union Data *e) {
    e->salary = 75000.50;  
}

int main() {
    union Data employee;
    employee.id = 105;
    
    printf("Before Modification: ID = %d\n", employee.id);
    
    // Passing union by reference
    modify(&employee);

    printf("After Modification: Salary = %.2f\n", employee.salary);

    return 0;
}
