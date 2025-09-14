#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student class[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter ID, Name, Marks for student %d:\n", i + 1);
        scanf("%d %s %f", &class[i].id, class[i].name, &class[i].marks);
    }

    printf("\nStudent Records:\n");
    for (int i = 0; i < 3; i++) {
        printf("ID: %d, Name: %s, Marks: %.2f\n", class[i].id, class[i].name, class[i].marks);
    }
    return 0;
}
