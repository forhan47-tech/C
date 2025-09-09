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
    newNode->next = NULL;

    printf("Node created with data = %d\n", newNode->data);

    free(newNode);
    return 0;
}
