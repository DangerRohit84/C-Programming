#include<stdio.h>
int main()
{
	int n;
	printf("enter the month number to get season :");
	scanf("%d",&n);
	if(n>=3 && n<=5)
	{
		printf("it is a summer season");
	}
	else if(n>=6 && n<=9)
	{
	printf("it is a rainy season");
    }
    else if(n>=10 && n<=12 || n==1 ||n==2)
    {
    	printf("it is a winter season");
	}
	else
	{
		printf("enter the valid month number ");
	}
    
}
