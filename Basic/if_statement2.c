#include <stdio.h>

int main() {
    int marks;

    // Input student marks
    printf("Enter marks: ");
    scanf("%d", &marks);

    // Cascaded if statements to determine the grade
    if (marks >= 90) {
        printf("Grade: A\n");
    } else if (marks >= 80) {
        printf("Grade: B\n");
    } else if (marks >= 70) {
        printf("Grade: C\n");
    } else if (marks >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n"); // Default case for marks below 60
    }

    return 0;
}