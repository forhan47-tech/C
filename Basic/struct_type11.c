#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s1;

    // Taking input
    printf("Enter Name: ");
    fgets(s1.name, sizeof(s1.name), stdin);  // Reads full name with spaces

    printf("Enter Age, Marks: ");
    scanf("%d %f", &s1.age, &s1.marks);
    
    // Display details
    printf("\nStudent Details:\n");
    printf("Name: %s\n, Age: %d\n, Marks: %.2f\n", s1.name, s1.age, s1.marks);

    return 0;
}

