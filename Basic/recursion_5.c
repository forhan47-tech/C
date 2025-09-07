#include <stdio.h>

void printSentence(int count) {
    if (count <= 0) {
        return;
    }
    printf("This is a recursive sentence.\n"); 
    printSentence(count - 1);
}

int main() {
    int n = 5;  
    printSentence(n);
    return 0;
}
