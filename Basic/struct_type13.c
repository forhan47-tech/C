#include <stdio.h>

// Define nested structure
struct Address {
    char city[30];
    char country[30];
};

struct Student {
    char name[50];
    int age;
    struct Address address;  // Nested structure
};

int main() {
    struct Student s1;

    // Taking input
    printf("Enter Name: ");
    scanf("%s", s1.name);

    printf("Enter Age: ");
    scanf("%d", &s1.age);

    printf("Enter City: ");
    scanf("%s", s1.address.city);

    printf("Enter Country: ");
    scanf("%s", s1.address.country);

    // Displaying data
    printf("\nStudent Details:\n");
    printf("Name: %s\n, Age: %d\n, City: %s\n, Country: %s\n", s1.name, s1.age, s1.address.city, s1.address.country);

    return 0;
}

