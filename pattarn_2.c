#include<stdio.h>
int main()
{
	char i,j,n=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",n);
			n=n+1;
			if(n==15)
			break;
			
		}
		
		printf(" \n");
	}
}
