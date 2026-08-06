#include <stdio.h>
int main() {
   int start, end, i, j, isPrime;

   printf("Enter the lower limit: ");
   scanf("%d", &start);
   printf("Enter the upper limit: ");
   scanf("%d", &end);
   printf("Prime numbers between %d and %d are:\n", start, end);

   if (start < 2) {
       start = 2;
   }

   for (i = start; i <= end; i++) {
       isPrime = 1;
       for (j = 2; j <= i / 2; j++) {
           if (i % j == 0) {
               isPrime = 0; 
               break;
           }
       }
       if (isPrime) {
           printf("%d ", i);
       }
   }
   return 0;
}

