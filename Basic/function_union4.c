#include <stdio.h>

// Define union
union Data {
    int id;
    float salary;
};

// Function to modify union
void modify(union Data *e) {
    e->salary = 75000.50;  // Modify union data using pointer
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

