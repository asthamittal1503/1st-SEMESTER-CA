#include <stdio.h>

int main() {
    int num, remainder, reverse = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; 
    while (num > 0) {
        remainder = num % 10;      
        reverse = reverse * 10 + remainder; 
        sum += remainder;          
        num /= 10;                 
    }

    printf("\nOriginal number: %d\n", original);
    printf("Reversed number: %d\n", reverse);
    printf("Sum of digits: %d\n", sum);

    return 0;
}

