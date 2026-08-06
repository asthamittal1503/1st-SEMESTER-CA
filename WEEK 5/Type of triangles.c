#include <stdio.h>

int main() {
    int a, b, c;

    // Input sides
    printf("Enter three sides of the triangle (a b c): ");
    scanf("%d %d %d", &a, &b, &c);

    // First check: triangle inequality
    if (a > b + c || b > a + c || c > a + b) {
        printf("No triangle is formed.\n");
    } else {
        // Identify the largest side to apply conditions correctly
        int max = a;
        int side1 = b, side2 = c;

        if (b > max) {
            max = b;
            side1 = a;
            side2 = c;
        }
        if (c > max) {
            max = c;
            side1 = a;
            side2 = b;
        }

        // Compare squares
        int maxSq = max * max;
        int sumSq = side1 * side1 + side2 * side2;

        if (maxSq == sumSq) {
            printf("It is a Right-angled triangle.\n");
        } else if (maxSq > sumSq) {
            printf("It is an Obtuse-angled triangle.\n");
        } else {
            printf("It is an Acute-angled triangle.\n");
        }
    }

    return 0;
}

