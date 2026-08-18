#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coeff, exp;
    struct Node* next;
};

struct Node* createNode(int c, int e) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->coeff = c;
    n->exp = e;
    n->next = NULL;
    return n;
}

void insertTermSorted(struct Node** head, int c, int e) {
    if (c == 0) return;

    struct Node* newNode = createNode(c, e);

    if (*head == NULL || (*head)->exp < e) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node *cur = *head, *prev = NULL;

    while (cur != NULL && cur->exp > e) {
        prev = cur;
        cur = cur->next;
    }


    if (cur != NULL && cur->exp == e) {
        cur->coeff += c;
        free(newNode);

        if (cur->coeff == 0) {
            if (prev == NULL) *head = cur->next;
            else prev->next = cur->next;
            free(cur);
        }
        return;
    }

    newNode->next = cur;
    if (prev != NULL) prev->next = newNode;
}

struct Node* multiplyPoly(struct Node* p1, struct Node* p2) {
    struct Node* result = NULL;

    for (struct Node* a = p1; a != NULL; a = a->next) {
        for (struct Node* b = p2; b != NULL; b = b->next) {
            int newCoeff = a->coeff * b->coeff;
            int newExp   = a->exp + b->exp;
            insertTermSorted(&result, newCoeff, newExp);
        }
    }

    return result;
}

void display(struct Node* head) {
    if (head == NULL) {
        printf("0\n");
        return;
    }

    int first = 1;
    while (head != NULL) {
        if (!first && head->coeff > 0) printf(" + ");
        if (head->coeff < 0) printf(" - ");

        int c = head->coeff < 0 ? -head->coeff : head->coeff;
        printf("%d", c);
        if (head->exp > 0) {
            printf("x");
            if (head->exp > 1) printf("^%d", head->exp);
        }

        first = 0;
        head = head->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    while (head) {
        struct Node* t = head;
        head = head->next;
        free(t);
    }
}

int main() {
    struct Node *poly1 = NULL, *poly2 = NULL, *prod = NULL;

    // poly1 = 3x^2 + 2x + 1
    insertTermSorted(&poly1, 3, 2);
    insertTermSorted(&poly1, 2, 1);
    insertTermSorted(&poly1, 1, 0);

    // poly2 = 2x + 4
    insertTermSorted(&poly2, 2, 1);
    insertTermSorted(&poly2, 4, 0);

    printf("Polynomial 1: ");
    display(poly1);

    printf("Polynomial 2: ");
    display(poly2);

    prod = multiplyPoly(poly1, poly2);

    printf("Product: ");
    display(prod);   // 6x^3 + 16x^2 + 10x + 4

    freeList(poly1);
    freeList(poly2);
    freeList(prod);

    return 0;
}