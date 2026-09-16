#include <stdio.h>
#define MAX 100

int arr[MAX];
int front = -1;
int rear = -1;

void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue is full\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    arr[rear] = value;
    printf("Enqueued: %d\n", value);
}

void dequeue() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Dequeued: %d\n", arr[front]);
    front++;
    if (front > rear) {
        front = -1;
        rear = -1;
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", arr[i]);
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