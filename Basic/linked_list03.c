#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d → ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = malloc(sizeof(struct Node));
    struct Node* second = malloc(sizeof(struct Node));
    struct Node* third = malloc(sizeof(struct Node));

    head->data = 10;    
    head->next = second;

    second->data = 20;  
    second->next = third;
    
    third->data = 30;   
    third->next = NULL;

    printList(head);

    free(head);
    free(second);
    free(third);

    return 0;
}
