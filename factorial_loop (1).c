#include<stdio.h>
int main()
{
	int i,n,p;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		p=p*n;
		printf("%d ",p);
	}
}
