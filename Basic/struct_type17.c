#include <stdio.h>

struct Address {
    char city[50];
    int zip;
};

struct Student {
    char name[50];
    struct Address addr; // Nested structure
};

int main() {
    struct Student s1 = {"Alice", {"New York", 10001}};

    printf("%s lives in %s (ZIP: %d)\n", s1.name, s1.addr.city, s1.addr.zip);
    return 0;
}
