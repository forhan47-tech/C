#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float percentage;
};

int main() {
    struct Student s1 = {101, "NAIMUDDIN", 95.5};

    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Percentage: %.2f\n", s1.percentage);

    return 0;
}
