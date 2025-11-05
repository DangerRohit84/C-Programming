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
	int c=0;
	scanf("%d",&m);
	for(int i=0;i<n;i++)
	{
		if(num[i]==m)
		c++;
		
	}
	if(c==0)
	printf("%d is not repeated in the Array",m);
	else
	printf("%d is repeated %d times",m,c);
}
