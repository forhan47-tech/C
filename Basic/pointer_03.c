#include <stdio.h>

int main() {
    int num;
    int *ptr = &num;  

    printf("Enter a number: ");
    scanf("%d", ptr); 

    printf("Value of num: %d\n", *ptr);    
    return 0;
}