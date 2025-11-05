#include<stdio.h>
int ff(int);
int main()
{
	int x;
	scanf("%d",&x);
	
		int r=ff(x);
		printf("%d ",r);
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
	int i,c=2,t=a;
	printf("1 ");
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
		printf("%d ",i);
		c++;
		}
	}
	printf("%d\n",t);
	return c;
}
