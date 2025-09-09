#include <stdio.h>

union Result {
    int code;
    char grade;
};

union Result getResult(int marks) {
    union Result r;
    
    if (marks >= 90)
        r.grade = 'A';
    else
        r.code = 0;  

    return r;
}

int main() {
    union Result res = getResult(95);

    printf("Grade: %c\n", res.grade);  
    return 0;
}
