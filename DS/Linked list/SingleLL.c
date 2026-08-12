//Aanchal-2501920100582
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *addEnd(struct Node *h, int x) {
    struct Node *p = malloc(sizeof(struct Node));
    if (!p) return h;
    p->data = x;
    p->next = NULL;
    if (!h) return p;
    struct Node *q = h;
    while (q->next) q = q->next;
    q->next = p;
    return h;
}

struct Node *addBeg(struct Node *h, int x) {
    struct Node *p = malloc(sizeof(struct Node));
    if (!p) return h;
    p->data = x;
    p->next = h;
    return p;
}

struct Node *addPos(struct Node *h, int x, int pos) {
    if (pos <= 0) return h;
    if (pos == 1) return addBeg(h, x);
    struct Node *q = h;
    for (int i = 1; i < pos - 1 && q; i++) q = q->next;
    if (!q) return h;
    struct Node *p = malloc(sizeof(struct Node));
    if (!p) return h;
    p->data = x;
    p->next = q->next;
    q->next = p;
    return h;
}

struct Node *delBeg(struct Node *h) {
    if (!h) return NULL;
    struct Node *temp = h;
    h = h->next;
    free(temp);
    return h;
}

struct Node *delEnd(struct Node *h) {
    if (!h) return NULL;
    if (!h->next) {
        free(h);
        return NULL;
    }
    struct Node *q = h;
    while (q->next->next) q = q->next;
    free(q->next);
    q->next = NULL;
    return h;
}

struct Node *delPos(struct Node *h, int pos) {
    if (!h || pos <= 0) return h;
    if (pos == 1) return delBeg(h);
    struct Node *q = h;
    for (int i = 1; i < pos - 1 && q; i++) q = q->next;
    if (!q || !q->next) return h;
    struct Node *temp = q->next;
    q->next = q->next->next;
    free(temp);
    return h;
}

void show(struct Node *h) {
    while (h) {
        printf("%d -> ", h->data);
        h = h->next;
    }
    printf("NULL\n");
}

void freeList(struct Node *h) {
    while (h) {
        struct Node *temp = h;
        h = h->next;
        free(temp);
    }
}

int main() {
    struct Node *h = NULL;
    int n, x, ch, p;

    printf("Enter number of nodes: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        h = addEnd(h, x);
    }

    do {
        printf("\nCurrent List: ");
        show(h);

        printf("\n1.Insert Beginning\n2.Insert Position\n3.Insert End\n");
        printf("4.Delete Beginning\n5.Delete Position\n6.Delete End\n");
        printf("7.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &x);
                h = addBeg(h, x);
                break;
            case 2:
                printf("Enter position and value: ");
                scanf("%d%d", &p, &x);
                h = addPos(h, x, p);
                break;
            case 3:
                printf("Enter value: ");
                scanf("%d", &x);
                h = addEnd(h, x);
                break;
            case 4:
                h = delBeg(h);
                break;
            case 5:
                printf("Enter position: ");
                scanf("%d", &p);
                h = delPos(h, p);
                break;
            case 6:
                h = delEnd(h);
                break;
            case 7:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (ch != 7);

    freeList(h);
    return 0;
}