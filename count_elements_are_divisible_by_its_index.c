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
	int c=0;
	for(int i=1;i<n;i++)
	{
		if(num[i]%i==0)
		{
		c++;	
		}
	}
	printf("%d",c);
}
