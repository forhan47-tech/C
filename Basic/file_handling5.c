#include <stdio.h>

int main() {
    FILE *fptr = fopen("data.txt", "r");
    if (fptr == NULL) {
        printf("File not found!\n");
        return 1;
    }

    char name[20];
    int age;
    fscanf(fptr, "Name: %s, Age: %d", name, &age); // Read formatted data
    printf("Read: Name = %s, Age = %d\n", name, age);

    fclose(fptr);
    return 0;
}
