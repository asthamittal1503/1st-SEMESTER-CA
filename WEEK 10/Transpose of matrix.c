#include <stdio.h>

int main() {
    int r, c, i, j; 
    printf("Enter the number of rows and columns for the matrix: ");
    scanf("%d %d", &r, &c);

    int matrix[r][c];
    int transpose[c][r]; 
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\nTransposed Matrix:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

