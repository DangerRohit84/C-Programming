#include<stdio.h>
int main()
{
	int n,r,ec=0,oc=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		n=n/10;
		if(r%2==0)
		{
		ec++;

		}
		else
		{
		oc++;
		}
	}
	if(ec==oc)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}
