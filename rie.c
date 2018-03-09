#include <stdio.h>
 
int main(void) 
{
	int n1,n2,sum;
	printf("enter number1:");
	scanf("%d",&n1);
	printf("enter number2:");
	scanf("%d",&n2);
	sum=n1+n2;
	if(sum%2==0)
	{
		printf("\neven");
	}
	else
	{
		printf("\nodd");
	}
	return 0;
}
