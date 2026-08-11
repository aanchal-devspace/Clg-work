#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void show(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
struct Node* insert_end(struct Node* head, int val) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = val;
    new_node->next = NULL;

    if (head == NULL) {
        return new_node;
    }
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    temp->next = new_node;
    return head;
}
int main() {
    struct Node* head = NULL;
    int val;
    head = insert_end(head, 10);
    head = insert_end(head, 20);
    head = insert_end(head, 30);
    printf("Current List: ");
    show(head);
    printf("Enter element to insert at the end: ");
    scanf("%d", &val);
    head = insert_end(head, val);
    printf("Updated List: ");
    show(head);
    return 0;
}
