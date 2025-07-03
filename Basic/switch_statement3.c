#include <stdio.h>

int main() {
    int department, role;

    printf("Enter Department (1 for HR, 2 for IT): ");
    scanf("%d", &department);

    switch (department) {
        case 1: // HR Department
            printf("Enter Role (1 for Manager, 2 for Assistant): ");
            scanf("%d", &role);

            switch (role) {
                case 1:
                    printf("HR Manager\n");
                    break;
                case 2:
                    printf("HR Assistant\n");
                    break;
                default:
                    printf("Invalid role for HR Department\n");
            }
            break;

        case 2: // IT Department
            printf("Enter Role (1 for Developer, 2 for Tester): ");
            scanf("%d", &role);

            switch (role) {
                case 1:
                    printf("IT Developer\n");
                    break;
                case 2:
                    printf("IT Tester\n");
                    break;
                default:
                    printf("Invalid role for IT Department\n");
            }
            break;

        default:
            printf("Invalid department\n");
    }

    return 0;
}