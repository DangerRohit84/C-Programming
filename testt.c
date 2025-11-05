#include<stdio.h>
int main()
{
	int n,sum=0,r,t;
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n%10;
	}
	if(sum>t)
	{
		printf("%d",sum);
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}
