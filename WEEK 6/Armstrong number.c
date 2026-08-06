#include<stdio.h>

int main (){
	int num,temp,digit,sum;
	
	printf("Armstrong numbers between 0 and 999 are :\n");	
	for (num=0; num<= 999; num++){
		temp = num;
		sum=0;
		
		while(temp>0){
			digit=temp%10;
			sum=sum+(digit*digit*digit);
			temp=temp/10;
		} 
		
		if(sum==num)
		   printf("%d\n", num);
	}
	
	return 0;
}

