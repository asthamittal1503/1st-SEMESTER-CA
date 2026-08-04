#include <stdio.h>
int main() {
	printf("size of int: %zu byte(s)\n",sizeof (int));
	printf("size of char: %zu byte(s)\n",sizeof (char));
	printf("size of short: %zu byte(s)\n",sizeof (short));
	printf("size of long: %zu byte(s)\n",sizeof (long));
	printf("size of float: %zu byte(s)\n",sizeof (float));
	printf("size of double: %zu byte(s)\n",sizeof (double));
	printf("size of long double: %zu byte(s)\n",sizeof (long double));
	printf("size of long long: %zu byte(s)\n",sizeof (long long));
	printf("size of pointer(void): %zu byte(s)\n",sizeof (void));
	
	return 0;
	}
