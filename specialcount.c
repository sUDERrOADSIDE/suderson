#include <stdio.h>

int main(void) 
{
	char str[50];
	int i,count=0;
	printf("enter the sentence:");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(!((str[i]>='0' && str[i]<='9')||(str[i]>='a' && str[i]<='z')))
		{
			count=count+1;
		}
	}
	printf("\nThere are %d number of special characters in your sentence",count);
	return 0;
}
