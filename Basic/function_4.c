#include <stdio.h>

char getGrade(int score) {
    if (score >= 90) 
       return 'A';
    else if (score >= 80) 
        return 'B';
    else 
        return 'F';
}

int main() {
    char grade = getGrade(85);
    printf("Grade: %c\n", grade);
    return 0;
}
