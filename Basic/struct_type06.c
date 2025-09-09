#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
};

int main() {
    struct Student s1;
    struct Student *ptr = &s1;

    ptr->id = 101;
    strcpy(ptr->name, "NAIMUDDIN");

    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);

    return 0;
}
