#include <stdio.h>

void modify(int *ptr) {
    *ptr = 20; 

}

int main() {
    int num = 10;  

    modify(&num);  
    printf("%d\n", num);  

    return 0;
}

