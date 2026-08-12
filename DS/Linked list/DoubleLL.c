//Aanchal-2501920100582
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

struct Node *addEnd(struct Node *h, int x) {
    struct Node *p = malloc(sizeof(struct Node));
    p->data = x;
    p->next = NULL;
    p->prev = NULL;
    if (!h) return p;
    struct Node *q = h;
    while (q->next) q = q->next;
    q->next = p;
    p->prev = q;
    return h;
}

struct Node *addBeg(struct Node *h, int x) {
    struct Node *p = malloc(sizeof(struct Node));
    p->data = x;
    p->prev = NULL;
    p->next = h;
    if (h) h->prev = p;
    return p;
}

struct Node *addPos(struct Node *h, int x, int pos) {
    if (pos == 1) return addBeg(h, x);
    struct Node *q = h;
    for (int i = 1; i < pos - 1 && q; i++) q = q->next;
    if (!q) return h;
    struct Node *p = malloc(sizeof(struct Node));
    p->data = x;
    p->next = q->next;
    p->prev = q;
    if (q->next) q->next->prev = p;
    q->next = p;
    return h;
}

struct Node *delBeg(struct Node *h) {
    if (!h) return NULL;
    struct Node *t = h;
    h = h->next;
    if (h) h->prev = NULL;
    free(t);
    return h;
}

struct Node *delEnd(struct Node *h) {
    if (!h) return NULL;
    if (!h->next) {
        free(h);
        return NULL;
    }
    struct Node *q = h;
    while (q->next) q = q->next;
    q->prev->next = NULL;
    free(q);
    return h;
}

struct Node *delPos(struct Node *h, int pos) {
    if (!h) return NULL;
    if (pos == 1) return delBeg(h);
    struct Node *q = h;
    for (int i = 1; i < pos && q; i++) q = q->next;
    if (!q) return h;
    if (q->next) q->next->prev = q->prev;
    if (q->prev) q->prev->next = q->next;
    free(q);
    return h;
}

void show(struct Node *h) {
    while (h) {
        printf("%d <-> ", h->data);
        h = h->next;
    }
    printf("NULL");
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
        printf("\nList: ");
        show(h);
        printf("\n\n1.Insert Beginning  2.Insert Position  3.Insert End\n");
        printf("4.Delete Beginning  5.Delete Position  6.Delete End\n");
        printf("7.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        if (ch == 1) {
            printf("Enter value: ");
            scanf("%d", &x);
            h = addBeg(h, x);
        } else if (ch == 2) {
            printf("Enter position and value: ");
            scanf("%d%d", &p, &x);
            h = addPos(h, x, p);
        } else if (ch == 3) {
            printf("Enter value: ");
            scanf("%d", &x);
            h = addEnd(h, x);
        } else if (ch == 4) {
            h = delBeg(h);
        } else if (ch == 5) {
            printf("Enter position: ");
            scanf("%d", &p);
            h = delPos(h, p);
        } else if (ch == 6) {
            h = delEnd(h);
        } else if (ch != 7) {
            printf("Invalid choice!\n");
        }

    } while (ch != 7);

    printf("\nFinal List: ");
    show(h);
    printf("\n");

    return 0;
}
