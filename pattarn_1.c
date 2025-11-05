#include<stdio.h>
int main()
{
	char i,j,k=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j>i)
			{
				printf("%d",i);
			}
			else
			printf("*");
			
		}
		printf("*\n");
	}
}
