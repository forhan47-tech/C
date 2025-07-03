#include <stdio.h>
#include <stdlib.h>

// Define the structure for each node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to print all nodes in the linked list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d → ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    // Dynamically allocate memory for three nodes
    struct Node* head = malloc(sizeof(struct Node));
    struct Node* second = malloc(sizeof(struct Node));
    struct Node* third = malloc(sizeof(struct Node));

    // Assign data and connect the nodes
    head->data = 10;    head->next = second;
    second->data = 20;  second->next = third;
    third->data = 30;   third->next = NULL;

    // Print the linked list
    printList(head);

    // Free dynamically allocated memory
    free(head);
    free(second);
    free(third);

    return 0;
}
