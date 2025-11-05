#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int num[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",num[i]);
	}
	printf("\n");
	for(int i=0;i<n/2;i++)
	{
		int temp=num[i];
		num[i]=num[n-1-i];
		num[n-1-i]=temp;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",num[i]);
	}
}
