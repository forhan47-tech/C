#include <stdio.h>

int main() {
    char ch = 'A'; 

    printf("Character: %c\n", ch);      
    printf("ASCII value: %d\n", ch);    

    printf("Next character: %c\n", ch + 1); 
    printf("Previous character: %c\n", ch - 1);
    
    return 0;
}