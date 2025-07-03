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

    // Assign data and initialize next pointer
    newNode->data = 42;
    newNode->next = NULL;

    printf("Node created with data = %d\n", newNode->data);

    // Free memory when done
    free(newNode);

    return 0;
}
