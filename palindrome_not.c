#include<stdio.h>
int reverse(int);
int main()
{
	int n;
	printf("Enter the possitve number :");
	scanf("%d",&n);
	int re=reverse(n);
		if(n==re)
	{
		printf("palindrome");
	}
	else
	{
		printf("Not a palindrome");
	}
}
int reverse(int n)
{
	int r,sum=0,t=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
		
	}
	return sum;
}
