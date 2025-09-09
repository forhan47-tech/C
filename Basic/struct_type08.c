#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    int pages;
};

int main() {
    struct Book library[2];

    strcpy(library[0].title, "C Programming");
    library[0].pages = 300;

    strcpy(library[1].title, "Data Structures");
    library[1].pages = 450;

    for (int i = 0; i < 2; i++) {
        printf("Book %d: %s (%d pages)\n", i + 1, library[i].title, library[i].pages);
    }

    return 0;
}
