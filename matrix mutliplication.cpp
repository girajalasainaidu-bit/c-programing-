#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int A[10][10], B[10][10], C[10][10];
    int r1, c1, r2, c2;
    int i, j, k;

    printf("Enter A matrix rows and columns: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter B matrix rows and columns: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication is not possible!\n");
        exit(1);
    }

    // Read matrix A
    printf("Enter A matrix values:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Read matrix B
    printf("Enter B matrix values:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix multiplication logic
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display result
    printf("\nResultant matrix is:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
