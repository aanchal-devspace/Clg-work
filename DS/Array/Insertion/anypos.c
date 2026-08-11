#include <stdio.h>
void show(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int insert_pos(int a[], int n, int pos, int val) {
    for (int i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos] = val;
    return n + 1;
}
int main() {
    int a[100] = {10, 20, 30, 40, 50};
    int n = 5;
    int num,pos;

    printf("Original: ");
    show(a, n);
    printf("\nEnter the value to insert: ");
    scanf("%d", &num);
    printf("\nEnter the value of index: ");
    scanf("%d", &pos);

    n = insert_pos(a, n, pos,num);
    printf("After insert at index %d: ", pos);
    show(a, n);
    return 0;
}
