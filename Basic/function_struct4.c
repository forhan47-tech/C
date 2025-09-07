#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
};

struct Student createStudent(int id, const char *name) {
    struct Student s;

    s.id = id;
    strcpy(s.name, name);
    
    return s;
}

int main() {
    struct Student s1 = createStudent(303, "NAIMUDDIN");

    printf("ID: %d, Name: %s\n", s1.id, s1.name);
    return 0;
}
