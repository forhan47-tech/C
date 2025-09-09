#include<stdio.h>

int main() {
    char names[5][30]; 

    printf("Enter 5 names:\n");

    for (int i = 0; i < 5; i++) {
        fgets(names[i], 30, stdin);
    }

    printf("\nYou entered:\n");

    for (int i = 0; i < 5; i++) {
        puts(names[i]);  
    }

    return 0;
}
