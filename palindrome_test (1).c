#include<stdio.h>
int main()
{
	int n,r,re=0,t;
	printf("Enter the positive number:");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		r=n%10;
		re=re*10+r;
		n=n/10;
		
	}
	if(re==t)
	{
		printf("The given %d is a palindrome",t);
	}
	else
	{
		printf("The given %d is a Not palindrome",t);
	}
}
