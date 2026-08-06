#include <stdio.h>

void printLowerTriangular(int matrix[][10], int rows, int cols) {
	int i, j; {
	    printf("Lower Triangular Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (i >= j) { 
                printf("%d ", matrix[i][j]);
            } else {
                printf("0");
            }
        }
        printf("\n");
    }
	}
}

void printUpperTriangular(int matrix[][10], int rows, int cols) {
	int i, j; {
	printf("Upper Triangular Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (i <= j) { 
                printf("%d ", matrix[i][j]);
            } else { 
                printf("0");
            }
        }
        printf("\n");
    }
	}
}

int main() {
    int rows, cols;
    int matrix[10][10];
	int i, j; 

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows != cols) {
        printf("Error: The matrix must be square to form triangular matrices.\n");
        return 1; 
    }

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    printLowerTriangular(matrix, rows, cols);
    printUpperTriangular(matrix, rows, cols);

    return 0;
}
