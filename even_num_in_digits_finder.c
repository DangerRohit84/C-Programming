#include<stdio.h>
int main()
{
	int n,r,c;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		printf("%d ",r);
		n=n/10;
		if(r%2==0)
		{
		c++;

		}
	}
	printf("\n%d ",c);
}
