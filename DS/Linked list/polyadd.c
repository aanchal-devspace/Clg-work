#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coeff;          
    int exp;            
    struct Node *next;
};

struct Node* createNode(int c, int e) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->coeff = c;
    temp->exp = e;
    temp->next = NULL;
    return temp;
}

void insert(struct Node** head, int c, int e) {
    struct Node* newNode = createNode(c, e);

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* t = *head;
    while (t->next != NULL)
        t = t->next;

    t->next = newNode;
}

struct Node* addPoly(struct Node* p1, struct Node* p2) {
    struct Node* result = NULL;

    while (p1 != NULL && p2 != NULL) {
        
        if (p1->exp == p2->exp) {
            int diff = p1->coeff - p2->coeff;
            if (diff != 0)
                insert(&result, diff, p1->exp);

            p1 = p1->next;
            p2 = p2->next;
        }
        
        else if (p1->exp > p2->exp) {
            insert(&result, p1->coeff, p1->exp);
            p1 = p1->next;
        }
        else {
            insert(&result, p2->coeff, p2->exp);
            p2 = p2->next;
        }
    }
    while (p1 != NULL) {
        insert(&result, p1->coeff, p1->exp);
        p1 = p1->next;
    }

    while (p2 != NULL) {
        insert(&result, p2->coeff, p2->exp);
        p2 = p2->next;
    }

    return result;
}
void display(struct Node* head) {
    while (head != NULL) {
        printf("%dx^%d", head->coeff, head->exp);
        if (head->next != NULL)
            printf(" + ");
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct Node *poly1 = NULL, *poly2 = NULL, *sum = NULL;

    // Polynomial 1: 5x^2 - 4x^1 + 2x^0
    insert(&poly1, 5, 2);
    insert(&poly1, -4, 1);
    insert(&poly1, 2, 0);

    // Polynomial 2: 5x^1 + 5x^0
    insert(&poly2, 5, 1);
    insert(&poly2, 5, 0);

    printf("Polynomial 1: ");
    display(poly1);

    printf("Polynomial 2: ");
    display(poly2);

    sum = addPoly(poly1, poly2);

    printf("Sum: ");
    display(sum);

    return 0;
}