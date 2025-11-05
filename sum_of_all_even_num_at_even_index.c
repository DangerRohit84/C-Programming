#include<stdio.h>
int main()
{
	int n,sum_e=0,sum_o=0;
	scanf("%d",&n);
	int num[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(i%2==0 && num[i]%2==0)
		{
		sum_e=sum_e+num[i];	
		}
		
		
	}
	printf("even sum is %d\n",sum_e);
}
