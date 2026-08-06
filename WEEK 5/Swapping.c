#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;
    printf("After swapping using temporary variable: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping without temporary variable: a = %d, b = %d\n", a, b);

    return 0;
}



