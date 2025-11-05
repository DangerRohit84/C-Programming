#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int num[n];
	for(int i=0;i<n;i++)
		scanf("%d",&num[i]);
	int temp=num[0];	
	for(int i=0;i<n;i++)
	{
		num[i]=num[i+1];
		
	}
	num[n-1]=temp;
	for(int i=0;i<n;i++)
	{
		printf("%d ",num[i]);
	}
}
