#include <stdio.h> 

// Define a structure for a node in the linked list
struct Node {
    int data;             // Stores the value in the node
    struct Node* next;    // Pointer to the next node
};

int main() {
    // Initialize the head pointer of the linked list to NULL
    struct Node* head = NULL;

    // Check if the linked list is empty
    if (head == NULL) {
        printf("The linked list is empty!\n");
    }

    return 0; 
}
