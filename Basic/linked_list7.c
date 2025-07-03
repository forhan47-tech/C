#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    // Allocate memory for a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    // Check if memory allocation was successful
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Assign data and make it circular
    newNode->data = 42;
    newNode->next = newNode;  // Circular link to itself

    // Output to confirm circular reference
    printf("Circular node created with data = %d\n", newNode->data);
    printf("Next node's data: %d\n", newNode->next->data);

    // Break the circle before freeing
    newNode->next = NULL;
    free(newNode);

    return 0;
}
