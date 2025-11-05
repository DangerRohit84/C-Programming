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
	int m;
	scanf("%d",&m);
	int f=0,k;
	for(int i=0;i<n;i++)
	{
		if(num[i]==m)
		{
		f=1;
		k=i;
		break;
		}	
	}
	if(f==1)
	printf("%d is Found at the Index %d",m,k);
	else
	printf("%d is Not Found",m);
}
