//AANCHAL
#include <stdio.h>
void show(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int delete_end(int n) {
    return n - 1;
}
int main() {
    int a[100] = {10, 20, 30, 40, 50};
    int n = 5;
    printf("Original: ");
    show(a, n);

    n = delete_end(n);
    printf("After delete end: ");
    show(a, n);
    return 0;
}
