#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

void printCircularList(struct Node* head) {
    if (head == NULL) return;
    
    struct Node* temp = head;
    do {
        printf("%d ⇄ ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to head)\n");
}

int main() {
    struct Node* head = malloc(sizeof(struct Node));
    struct Node* second = malloc(sizeof(struct Node));
    struct Node* third = malloc(sizeof(struct Node));

    head->data = 10;
    second->data = 20;
    third->data = 30;

    // Linking next pointers
    head->next = second;
    second->next = third;
    third->next = head;  // Circular link

    // Linking prev pointers
    head->prev = third;  // Circular link
    second->prev = head;
    third->prev = second;

    printCircularList(head);

    // Freeing manually to avoid breaking circular links first
    third->next = NULL;
    head->prev = NULL;

    free(head);
    free(second);
    free(third);

    return 0;
}
