#include <stdio.h>

int main() {
   int a, b, temp_a, temp_b, HCF, LCM;
   
   printf("Enter two numbers: ");
   scanf("%d %d", &a, &b);
   temp_a = a;
   temp_b = b;

   while (b != 0) {
       int temp = b;
       b = a % b;
       a = temp;
   }
   HCF = a;

   LCM = (temp_a * temp_b) / HCF;

   printf("HCF of %d and %d is %d\n", temp_a, temp_b, HCF);
   printf("LCM of %d and %d is %d\n", temp_a, temp_b, LCM);
   return 0;
}
