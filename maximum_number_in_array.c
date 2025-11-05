#include<stdio.h>
int main()
{
	int n,sum=0;
	scanf("%d",&n);
	int num[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	int max=num[0];
	
	for(int i=1;i<n;i++)
	{
		if(num[i] > max)
		{
			max=num[i];	
		}	
	}
	printf("Maximum number in Array is %d",max);

}
