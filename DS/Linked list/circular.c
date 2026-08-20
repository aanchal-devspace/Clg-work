//aanchal
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
struct Node* head = NULL;
int countNodes() {
    if (head == NULL) return 0;
    int cnt = 0;
    struct Node* p = head->next;
    do {
        cnt++;
        p = p->next;
    } while (p != head->next);
    return cnt;
}
void insertBeginning(int val) {
    struct Node* temp = malloc(sizeof(struct Node));
    temp->data = val;
    if (head == NULL) {
        temp->next = temp;
        head = temp;
    } else {
        temp->next = head->next;
        head->next = temp;
    }
}
void insertEnd(int val) {
    struct Node* temp = malloc(sizeof(struct Node));
    temp->data = val;
    if (head == NULL) {
        temp->next = temp;
        head = temp;
    } else {
        temp->next = head->next;
        head->next = temp;
        head = temp;
    }
}
void insertAtPosition(int val, int pos) {
    int n = countNodes();
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position\n");
        return;
    }
    if (pos == 1) {
        insertBeginning(val);
        return;
    }
    struct Node* p = head->next;
    for (int i = 1; i < pos - 1; i++) p = p->next;
    struct Node* temp = malloc(sizeof(struct Node));
    temp->data = val;
    temp->next = p->next;
    p->next = temp;
    if (p == head) head = temp;
}
void deleteBeginning() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = head->next;
    if (temp == head) {
        free(temp);
        head = NULL;
    } else {
        head->next = temp->next;
        free(temp);
    }
}
void deleteEnd() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* last = head;
    if (last->next == last) {
        free(last);
        head = NULL;
        return;
    }
    struct Node* p = head->next;
    while (p->next != head) p = p->next;
    p->next = head->next;
    free(head);
    head = p;
}
void deleteAtPosition(int pos) {
    int n = countNodes();
    if (head == NULL || pos < 1 || pos > n) {
        printf("Invalid position or list empty\n");
        return;
    }
    if (pos == 1) {
        deleteBeginning();
        return;
    }
    struct Node* p = head->next;
    for (int i = 1; i < pos - 1; i++) p = p->next;
    struct Node* target = p->next;
    p->next = target->next;
    if (target == head) head = p;
    free(target);
}
void display() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* p = head->next;
    do {
        printf("%d ", p->data);
        p = p->next;
    } while (p != head->next);
    printf("\n");
}
int main() {
    int choice;
    int val, pos;
    int init_n;
    printf("Enter number of initial elements: ");
    if (scanf("%d", &init_n) == 1 && init_n > 0) {
    printf("Enter %d values:\n", init_n);
    for (int i = 0; i < init_n; i++) {
        scanf("%d", &val);
        insertEnd(val);
    }
}
    do {
        printf("1 Insert at beginning\n");
        printf("2 Insert at position\n");
        printf("3 Insert at end\n");
        printf("4 Delete at beginning\n");
        printf("5 Delete at position\n");
        printf("6 Delete at end\n");
        printf("0 Exit\n");
        printf("Enter choice: ");
        if (scanf("%d", &choice) != 1) return 0;
        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                insertBeginning(val);
                 display();
                break;
            case 2:
                printf("Enter value: ");
                scanf("%d", &val);
                printf("Enter position: ");
                scanf("%d", &pos);
                insertAtPosition(val, pos);
                 display();
                break;
            case 3:
                printf("Enter value: ");
                scanf("%d", &val);
                insertEnd(val);
                 display();
                break;
            case 4:
                deleteBeginning();
                 display();
                break;
            case 5:
                printf("Enter position: ");
                scanf("%d", &pos);
                deleteAtPosition(pos);
                 display();
                break;
            case 6:
                deleteEnd();
                 display();
                break;
            case 0:
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 0);
    return 0;
}