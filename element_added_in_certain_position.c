#include<stdio.h>
int main()
{
	int num[10],n,p,m;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&num[i]);
	printf("Enter the position to add number ");
	scanf("%d",&p);
	scanf("%d",&m);
	for(int i=n;i>p-1;i--)
	{
		num[i]=num[i-1];
	}
	num[p-1]=m;
	n++;
	for(int i=0;i<n;i++)
	{
		printf("%d ",num[i]);
	}
	
}
