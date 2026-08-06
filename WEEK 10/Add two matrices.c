#include <stdio.h>

void printMatrix(int matrix[][10], int N) {
	int i, j; {
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
  }
}

void addMatrices(int A[][10], int B[][10], int C[][10], int N) {
    int i, j; {
	for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}
}

int main() {
    int N;
    int i, j;

    printf("Enter the order of the square matrices (N): ");
    scanf("%d", &N);
    int A[10][10], B[10][10], C[10][10];

    printf("\nEnter elements of Matrix A:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Enter element A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Enter element B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    printf("\nMatrix A:\n");
    printMatrix(A, N);

    printf("\nMatrix B:\n");
    printMatrix(B, N);

    addMatrices(A, B, C, N);
    printf("\nSum of Matrices (A + B):\n");
    printMatrix(C, N);

    return 0;
}
