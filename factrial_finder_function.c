#include<stdio.h>
int factorial(int);
int main()
{
	int n;
	scanf("%d",&n);
	int res=factorial(n);
	printf("The factorial of %d is: %d",n,res);
	
}
int factorial(int a)
{
	int i,f=1;
	for(i=1;i<=a;i++)
	{
		f=f*i;
			printf("%d ",f);
	}
	return f;
}

