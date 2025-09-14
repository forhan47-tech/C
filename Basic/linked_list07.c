#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    newNode->data = 42;
    newNode->next = newNode;  // Circular link to itself

    printf("Circular node created with data = %d\n", newNode->data);
    printf("Next node's data: %d\n", newNode->next->data);

    // Break the circle before freeing
    newNode->next = NULL;
    free(newNode);
    return 0;
}
