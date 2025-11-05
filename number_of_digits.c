#include<stdio.h>
int find_digits(int);
int main()
{
	int n;
	scanf("%d",&n);
	int re=find_digits(n);
	printf("%d",re);
}
int find_digits(int n)
{
	int r,c;
	while(n>0)
	{
		r=n%10;
		c++;
		n=n/10;
	}
	return c;
}
