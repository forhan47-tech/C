#include <stdio.h>

typedef union {
    int id;
    float salary;
} Data;

int main() {
    Data emp;
    int choice;

    printf("Enter 1 to input Employee ID or 2 to input Salary: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter Employee ID: ");
        scanf("%d", &emp.id);
        printf("Employee ID: %d\n", emp.id);
    } else {
        printf("Enter Employee Salary: ");
        scanf("%f", &emp.salary);
        printf("Employee Salary: %.2f\n", emp.salary);
    } 
    return 0;
}
