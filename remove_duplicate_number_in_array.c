#include<stdio.h>
int main()
{
	int n,j=0,k;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int temp[n];
	temp[0]=arr[0];
	for(int i=1;i<n;i++)
	{
		int a=0;
		for(int k=0;k<j;k++)
		{
		if(arr[i]==temp[k])
		{
		a=1;
		break;	
		}	
		}
		if(a==0)
		{
			temp[i]=arr[i];
			j++;
		}
	}
	for(int i=0;i<j;i++)
	{
		printf("%d ",temp[i]);
	}
}

