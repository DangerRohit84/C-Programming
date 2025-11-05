#include<stdio.h>
int ff(int);
int main()
{
	int n;
	scanf("%d",&n);
	int r=ff(n);
	if(r==2)
		{
		printf("it is a prime");
		}
		else
	{
		printf("it is not a prime number");
	}
	
}
int ff(int a)
{
	int i,c=2;

	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
		c++;
		}
	}

	return c;
}
