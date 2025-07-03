#include <stdio.h>

enum Grade { A, B, C, D, F };

// Function to determine grade
enum Grade getGrade(int marks) {
    if (marks >= 90) return A;
    else if (marks >= 80) return B;
    else if (marks >= 70) return C;
    else if (marks >= 60) return D;
    return F;
}

int main() {
    enum Grade result = getGrade(85);
    printf("Grade: %d\n", result);  // Enum is printed as an integer
    return 0;
}

