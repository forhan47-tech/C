#include <stdio.h>

// return char, one integer parameter
char getGrade(int score) {
    if (score >= 90) 
       return 'A';
    else 
        return 'F';
}

int main() {
    char grade = getGrade(85);
    
    printf("Grade: %c\n", grade);
    return 0;
}
