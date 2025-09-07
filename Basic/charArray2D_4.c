#include<stdio.h>

int main() {
    char names[5][20]; // 5 strings, each up to 19 chars

    printf("Enter 5 names:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%s", names[i]);
    }

    printf("\nYou entered:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
