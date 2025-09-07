#include <stdio.h>

int main() {
    int numbers[5]; 

    printf("Enter 5 integers:\n");  
    for (int i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &numbers[i]); 
    }

    printf("\nThe elements of the array are:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i + 1, numbers[i]); 
    }

    return 0;
}