#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value :");
	scanf("%d",&a);
	b=a%5;
	c=a%11;
	if(b==0 && c==0)
	{
		printf("The given value %d is divisible by 5 and 11\n",a);
		
	}
	else
	{
		printf("The given value %d is not divisible by 5 and 11",a);
		
	}
}
