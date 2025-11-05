#include<stdio.h>
int fac(int);
int main()
{
	int x;
	scanf("%d",&x);
	int factorial=fac(x);
	printf("factorial of %d is %d",x,factorial);
}
int fac(int n)
{
	int f=1;
	for(int i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
