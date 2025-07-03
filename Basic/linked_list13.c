#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Search for a value in the list
int search(struct Node* head, int key) {
    int position = 0;
    while (head != NULL) {
        if (head->data == key)
            return position;  // Found at this position
        head = head->next;
        position++;
    }
    return -1; // Not found
}

// Print the list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d → ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    // Setup list: 10 → 20 → 30
    struct Node* head = malloc(sizeof(struct Node));
    struct Node* second = malloc(sizeof(struct Node));
    struct Node* third = malloc(sizeof(struct Node));

    head->data = 10; head->next = second;
    second->data = 20; second->next = third;
    third->data = 30; third->next = NULL;

    printList(head);

    int target = 20;
    int pos = search(head, target);

    if (pos != -1)
        printf("Value %d found at position %d.\n", target, pos);
    else
        printf("Value %d not found in the list.\n", target);

    // Cleanup
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
