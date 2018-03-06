#include <stdio.h>

int main(void) 
{
	int num,rem,rev=0;
	printf("enter number:");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}
	num=rev;
	while(num!=0)
	{
		rem=num%10;
		printf("%d ",rem);
		num=num/10;
	}
	return 0;

}
© 2018 GitHub, Inc.
