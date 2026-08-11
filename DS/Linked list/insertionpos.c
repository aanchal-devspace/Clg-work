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
struct Node* insert_pos(struct Node* head, int pos, int val) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = val;
    new_node->next = NULL;
    if (pos == 0) {
        new_node->next = head;
        return new_node;
    }
    struct Node* temp = head;
    for (int i = 0; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Invalid position!\n");
        free(new_node);
        return head;
    }

    new_node->next = temp->next;
    temp->next = new_node;
    return head;
}

int main() {
    struct Node* head = NULL;
    int val, pos;

    head = insert_pos(head, 0, 10);
    head = insert_pos(head, 1, 20);
    head = insert_pos(head, 2, 30);

    printf("Current List: ");
    show(head);
    printf("Enter element to insert: ");
    scanf("%d", &val);
    printf("Enter position: ");
    scanf("%d", &pos);
    head = insert_pos(head, pos, val);

    printf("Updated List: ");
    show(head);

    return 0;
}
