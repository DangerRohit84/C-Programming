#include<stdio.h>
int main()
{
	int n,r,c;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r==0)
		{
		c++;
		
		}
		n=n/10;
	}
	printf("%d ",c);

}
