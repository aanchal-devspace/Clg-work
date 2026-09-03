//aanchal
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int arrStack[MAX];
int top = -1;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;
void pushArray(int value)
{
    if (top == MAX - 1)
    {
        printf("Array Stack Overflow\n");
        return;
    }
    top++;
    arrStack[top] = value;
    printf("%d pushed in Array Stack\n", value);
}

void popArray()
{
    if (top == -1)
    {
        printf("Array Stack Underflow\n");
        return;
    }
    printf("%d popped from Array Stack\n", arrStack[top]);
    top--;
}
void displayArray()
{
    int i;
    if (top == -1)
    {
        printf("Array Stack is Empty\n");
        return;
    }
    printf("Array Stack: ");
    for (i = top; i >= 0; i--)
    {
        printf("%d ", arrStack[i]);
    }
    printf("\n");
}
void pushList(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory not available\n");
        return;
    }
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    printf("%d pushed in Linked List Stack\n", value);
}

void popList()
{
    struct Node *temp;
    if (head == NULL)
    {
        printf("Linked List Stack Underflow\n");
        return;
    }
    temp = head;
    printf("%d popped from Linked List Stack\n", temp->data);
    head = head->next;
    free(temp);
}
void displayList()
{
    struct Node *temp = head;
    if (temp == NULL)
    {
        printf("Linked List Stack is Empty\n");
        return;
    }
    printf("Linked List Stack: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    int choice, value;

    while (1)
    {
        printf("\n1.Push Array\n2.Pop Array\n3.Display Array\n");
        printf("4.Push Linked List\n5.Pop Linked List\n6.Display Linked List\n7.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter value: ");
            scanf("%d", &value);
            pushArray(value);
        }
        else if (choice == 2)
        {
            popArray();
        }
        else if (choice == 3)
        {
            displayArray();
        }
        else if (choice == 4)
        {
            printf("Enter value: ");
            scanf("%d", &value);
            pushList(value);
        }
        else if (choice == 5)
        {
            popList();
        }
        else if (choice == 6)
        {
            displayList();
        }
        else if (choice == 7)
        {
            break;
        }
        else
        {
            printf("Invalid choice\n");
        }
    }
    return 0;
}