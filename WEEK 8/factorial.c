#include <stdio.h>

main() {
	int n, i, fact = 1;
	printf("Enter a non-negative integer: ");
	scanf("%d",&n);
	
	if(n<0)
	printf("You entered a negative number, Try again.\n");
	else
	{for(i = 2; i<=n; i++)
	{fact = fact*i;
	}
	printf("%d! = %d", n, fact);
	}
}
