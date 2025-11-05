#include<stdio.h>
int ff(int);
int main()
{
	int x;
	scanf("%d",&x);
	
		int r=ff(x);
		if(r==2)
		{
		printf("It is a prime");
		}	
		else
		{
		printf("It is not a prime");
		}

}

int ff(int a)
{
	int i,c=1,t=a;
	for(i=1;i<=a/2;i++)
	{
		if(a%i==0)
		{
		c++;
		}
	}
	return c;
}
