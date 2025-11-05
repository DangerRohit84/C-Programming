#include<stdio.h>
int reverse(int);
int main()
{
	int n;
	printf("Enter the possitve number :");
	scanf("%d",&n);
	int re=reverse(n);
	printf("The reverse of Given number %d is %d",n,re);
}
int reverse(int n)
{
	int r,sum=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
		
	}
	return sum;
}
