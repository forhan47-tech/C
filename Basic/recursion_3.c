#include <stdio.h>

// Function to print a sentence using recursion
void printSentence(int count) {
    if (count <= 0) { // Base case: Stop recursion
        return;
    }
    printf("This is a recursive sentence.\n"); // Print sentence
    printSentence(count - 1); // Recursive call(backtrack)
}

int main() {
    int n = 5; // Number of times to print the sentence
    printSentence(n);
    return 0;
}
