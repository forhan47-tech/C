#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
};

void update(struct Student *s) {
    s->id = 202;
    strcpy(s->name, "UPDATED");
}

int main() {
    struct Student s1 = {101, "NAIMUDDIN"};

    update(&s1); 
    
    printf("ID: %d, Name: %s\n", s1.id, s1.name);
    return 0;
}
