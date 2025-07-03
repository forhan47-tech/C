#include <stdio.h>
#include <stdlib.h>

// Doubly linked list node structure
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

int main() {
    // Allocate memory for a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    // Check if memory allocation was successful
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Assign data and initialize pointers
    newNode->data = 42;
    newNode->next = NULL;
    newNode->prev = NULL;

    // Output
    printf("Doubly linked node created with data = %d\n", newNode->data);

    // Free memory when done
    free(newNode);

    return 0;
}

