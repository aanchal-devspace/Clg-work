#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void enqueue(int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    
    if (front == NULL) {
        front = newNode;
        rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("Enqueued: %d\n", value);
}

void dequeue() {
    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    printf("Dequeued: %d\n", front->data);
    struct Node *temp = front;
    front = front->next;
    free(temp);
    
    if (front == NULL) {
        rear = NULL;
    }
}

void display() {
    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue: ");
    struct Node *temp = front;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    
    dequeue();
    display();
    
    enqueue(40);
    display();
    
    return 0;
}