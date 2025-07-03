#include <stdio.h>

struct Student {
    int id;
    float grade;
    char name[50];
};

int main() {
    struct Student student1;
    printf("Size of struct Student: %zu bytes\n", sizeof(student1));  // Output: Varies depending on member types
    return 0;
}