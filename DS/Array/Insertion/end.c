#include <stdio.h>

void show(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int insert_end(int a[], int n, int val) {
    a[n] = val;
    return n + 1;
}
int main() {
    int a[100] = {10, 20, 30, 40, 50};
    int n = 5;
    int num;

    printf("Original: ");
    show(a, n);
    printf("\nEnter the value to insert at the end: ");
    scanf("%d", &num);

    n = insert_end(a, n, num);
    printf("After insertion: ");
    show(a, n);
    return 0;
}
