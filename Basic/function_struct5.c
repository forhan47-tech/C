#include <stdio.h>

struct Student {
    char name[20];
    int id;
};

void updateID(struct Student *s, int newID) {
    s->id = newID;
}

int main() {
    struct Student st = {"NAIMUDDIN", 101};
    updateID(&st, 202);
    printf("Updated ID: %d\n", st.id);
    return 0;
}
