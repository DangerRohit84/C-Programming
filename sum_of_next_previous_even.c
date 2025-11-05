#include<stdio.h>
int main()
{
	int n,sum_e=0;
	scanf("%d",&n);
	int num[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(int i=1;i<n-1;i++)
	{	
		if(num[i-1]%2==0 && num[i+1]%2==0)
			{
			sum_e=sum_e+num[i];	
			}
	}
	printf("even sum is %d\n",sum_e);

}


