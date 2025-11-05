#include<stdio.h>
int ff(int);
int main()
{
	int x,y,i;
	scanf("%d %d",&x,&y);
	for(i=x;i<=y;i++)
	{
		int r=ff(i);
		if(r==2)
		{
		printf("%d ",i);
		}	
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
