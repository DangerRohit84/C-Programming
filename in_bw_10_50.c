#include<stdio.h>
int main()
{
	int a;
	printf("enter the value :");
	scanf("%d",&a);
	if(a>=10 && a<=50)
	{
		printf("%d is inbetween the 10 and 50 ",a);
	}
	else
	{
		
		printf("%d is not between 10 and 50 ",a);
		
	}
}
