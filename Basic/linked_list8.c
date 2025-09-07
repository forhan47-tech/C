#include <stdio.h>
#include <stdlib.h>

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

    // Assign data and make it point to itself (circular + doubly)
    newNode->data = 42;
    newNode->next = newNode;  // Circular forward
    newNode->prev = newNode;  // Circular backward

    printf("Doubly circular node created with data = %d\n", newNode->data);

    // Optional check
    printf("Next node data: %d\n", newNode->next->data);
    printf("Prev node data: %d\n", newNode->prev->data);

    // Break the circular links before freeing
    newNode->next = NULL;
    newNode->prev = NULL;

    free(newNode);

    return 0;
}
