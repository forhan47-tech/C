#include<stdio.h>
#include<string.h> // for strlen

int main() {
    char names[5][30]; // 5 names, max 29 characters each

    printf("Enter 5 names:\n");

    for (int i = 0; i < 5; i++) {
        fgets(names[i], 30, stdin);
    }

    printf("\nYou entered:\n");

    for (int i = 0; i < 5; i++) {
        puts(names[i]);  // simply print using puts
    }

    return 0;
}
