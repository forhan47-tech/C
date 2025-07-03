#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Modified print function for circular list
void printCircularList(struct Node* head) {
    if (head == NULL) return;

    struct Node* temp = head;
    do {
        printf("%d → ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to head)\n");
}

int main() {
    struct Node* head = malloc(sizeof(struct Node));
    struct Node* second = malloc(sizeof(struct Node));
    struct Node* third = malloc(sizeof(struct Node));

    head->data = 10;    head->next = second;
    second->data = 20;  second->next = third;
    third->data = 30;   third->next = head;  // circular link

    printCircularList(head);

    // To safely free memory from a circular list:
    third->next = NULL;  // break the loop
    free(head);
    free(second);
    free(third);

    return 0;
}
