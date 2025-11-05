#include<stdio.h>
int main()
{
	int a;
	printf("Enter you age :");
	scanf("%d",&a);
	if(a>=0 && a<=2)
	{
		printf("Infant");
		
	}
	else if(a>=3 && a<=12)
	{
		printf("Child");
	}
	else if(a>=13 && a<=19)
	{
		printf("Teen");
	}
	else if(a>=20 && a<=64)
	{
		printf("Adult");
	}
	else
	{
		printf("Senior");
	}
}
