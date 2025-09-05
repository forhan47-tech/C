#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student class[3] = {
        {101, "NAIMUDDIN", 95.5},
        {102, "ALI", 88.0},
        {103, "RAHIM", 91.2}
    };

    int searchId = 102;
    for (int i = 0; i < 3; i++) {
        if (class[i].id == searchId) {
            printf("Found: %s with %.2f marks\n", class[i].name, class[i].marks);
        }
    }

    return 0;
}
