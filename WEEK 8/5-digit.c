#include <stdio.h>

int main() {
    int number, digit, newNumber = 0, place = 1;

    printf("Enter a 5-digit number: ");
    scanf("%d", &number);

    while (number > 0) {
        digit = number % 10;
        digit = (digit + 1) % 10; 
        newNumber = newNumber + (digit * place); 
        place *= 10; 
        number /= 10; 
    }

    printf("The new number is: %d\n", newNumber);

    return 0;
}

