#include <stdio.h> 

// Define linked list
struct Node {
    int data;        
    struct Node* next; 
};

int main() {
    struct Node* head = NULL;

    if (head == NULL) {
        printf("The linked list is empty!\n");
    }

    return 0; 
}
