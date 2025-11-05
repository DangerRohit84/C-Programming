#include<stdio.h>
int main()
{
	int n,sum_o=0;
	scanf("%d",&n);
	int num[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(int i=1;i<n-1;i++)
	{
			if(num[i-1]%2!=0 && num[i+1]%2!=0)
			{
			sum_o=sum_o+num[i];	
			}
	}
	printf("odd sum is %d\n",sum_o);

}


