#include<stdio.h>
int ff(int);
int re(int);
int main()
{
	int x;
	scanf("%d",&x);
		int r=ff(x);
		if(r==2)
		{
		int res=re(x);
		int s=ff(res);	
			if(s==2)
			{
			printf("True");
			}
		}
		else
		{
		printf("False");
		}		

}
int re(int n)
{
	int r,re=0;
	while(n>0)
	{
		r=n%10;
		re=re*10+r;
		n=n/10;
	}
	return re;
}
int ff(int a)
{
	int i,c=0;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			c++;
		}
	}

	return c;
}
