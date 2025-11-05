#include<stdio.h>
int main()
{
	int n;
	printf("Enter the any positive number: ");
	scanf("%d",&n);
	int t=n,r,sum=0;
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("Sum of the given number %d is %d",t,sum);
}
