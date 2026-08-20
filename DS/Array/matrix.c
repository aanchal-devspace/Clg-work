//aanchal 
#include <stdio.h>
#define MAX 10  
int main(void) {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int r1, c1, r2, c2;

    printf("Enter rows and cols of matrix A (max %d): ", MAX);
    if (scanf("%d %d", &r1, &c1) != 2) return 1;
    printf("Enter rows and cols of matrix B (max %d): ", MAX);
    if (scanf("%d %d", &r2, &c2) != 2) return 1;

    if (r1 <= 0 || c1 <= 0 || r2 <= 0 || c2 <= 0 ||
        r1 > MAX || c1 > MAX || r2 > MAX || c2 > MAX) {
        printf("Invalid size. Use values from 1 to %d.\n", MAX);
        return 1;
    }
    if (c1 != r2) {
        printf("Error: columns of A must equal rows of B for multiplication.\n");
        return 1;
    }

    printf("Enter elements of matrix A (%d values):\n", r1 * c1);
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c1; ++j)
            scanf("%d", &A[i][j]);

    printf("Enter elements of matrix B (%d values):\n", r2 * c2);
    for (int i = 0; i < r2; ++i)
        for (int j = 0; j < c2; ++j)
            scanf("%d", &B[i][j]);

    
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j)
            C[i][j] = 0;

    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < c1; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Result matrix (%d x %d):\n", r1, c2);
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            printf("%d", C[i][j]);
            if (j + 1 < c2) printf(" ");
        }
        printf("\n");
    }

    return 0;
}