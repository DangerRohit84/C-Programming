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
	int min=num[0];
	
	for(int i=1;i<n;i++)
	{
		if(num[i] < min)
		{
			min=num[i];	
		}	
	}
	printf("Minimum Number in Array is %d",min);

}
