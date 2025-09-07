#include <stdio.h>
#include <stdlib.h>

// Doubly linked list node structure
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

int main() {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    newNode->data = 42;
    newNode->next = NULL;
    newNode->prev = NULL;

    printf("Doubly linked node created with data = %d\n", newNode->data);

    free(newNode);

    return 0;
}

