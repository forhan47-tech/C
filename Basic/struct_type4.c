#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float percentage;
};

int main() {
    struct Student s2 = {
        .name = "NAIMUDDIN",
        .percentage = 99.9,
        .id = 102
    };

    printf("ID: %d\n", s2.id);
    printf("Name: %s\n", s2.name);
    printf("Percentage: %.2f\n", s2.percentage);

    return 0;
}
