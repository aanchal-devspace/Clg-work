//AANCHAL
/*#include <stdio.h>
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
struct Node* delete_pos(struct Node* head, int pos) {
    if (head == NULL) {
        printf("List is empty!\n");
        return NULL;
    }
    struct Node* temp = head;

    if (pos == 0) {
        head = head->next;
        free(temp);
        return head;
    }
    for (int i=0; i<pos - 1 && temp!= NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("Invalid position!\n");
        return head;
    }
    struct Node* del = temp->next;
    temp->next = del->next;
    free(del);
    return head;
}

int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = NULL;
    printf("Current List: ");
    show(head);

    int pos;
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    head = delete_pos(head, pos);
    printf("Updated List: ");
    show(head);

    return 0;
}*/
//AANCHAL
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
struct Node* delete_pos(struct Node* head, int pos) {
    if (head == NULL) {
        printf("List is empty!\n");
        return NULL;
    }
    struct Node* temp = head;

    if (pos == 0) {
        head = head->next;
        free(temp);
        return head;
    }
    for (int i=0; i<pos - 1 && temp!= NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("Invalid position!\n");
        return head;
    }
    struct Node* del = temp->next;
    temp->next = del->next;
    free(del);
    return head;
}

int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = NULL;
    printf("Current List: ");
    show(head);

    head = delete_pos(head,2 );
    printf("Updated List: ");
    show(head);

    return 0;
}

