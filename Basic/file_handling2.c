#include <stdio.h>

int main() {
    FILE *fptr = fopen("data.txt", "r");
    
    if (fptr == NULL) {
        printf("File not found!\n");
        return 1;
    }

    char name[20];
    int age;
    fscanf(fptr, "%s %d", name, &age); // Read a string and an integer
    printf("Name = %s, Age = %d\n", name, age);

    fclose(fptr);
    return 0;
}
