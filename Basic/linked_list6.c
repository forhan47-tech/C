#include <stdio.h>
#include <stdlib.h>

// Doubly Linked List Node
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to print the list forward
void printListForward(struct Node* head) {
    while (head != NULL) {
        printf("%d ⇄ ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Function to print the list backward
void printListBackward(struct Node* tail) {
    while (tail != NULL) {
        printf("%d ⇄ ", tail->data);
        tail = tail->prev;
    }
    printf("NULL\n");
}

int main() {
    // Allocate memory for 3 nodes
    struct Node* head = malloc(sizeof(struct Node));
    struct Node* second = malloc(sizeof(struct Node));
    struct Node* third = malloc(sizeof(struct Node));

    // Initialize nodes
    head->data = 10;    head->prev = NULL;   head->next = second;
    second->data = 20;  second->prev = head; second->next = third;
    third->data = 30;   third->prev = second; third->next = NULL;

    // Print list from head to tail
    printListForward(head);

    // Print list from tail to head
    printListBackward(third);

    // Clean up memory
    free(head);
    free(second);
    free(third);

    return 0;
}
