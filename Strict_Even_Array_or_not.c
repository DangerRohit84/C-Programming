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
	int se=0;
	for(int i=0;i<n;i++)
	{
		if(num[i]%2==0)
		{
			se++;
		}
	}
	if(se==n)
	{
		printf("Strict Even Array");
	}
	else
	{
		printf("Not a Strict Even Array");
	}
}
