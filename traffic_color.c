#include<stdio.h>
int main()
{
	int color;
	printf("1.Red\n2.Yellow\n3.Green\n");
	printf("Enter the above number(1to3) to get traffic rules :");
	scanf("%d",&color);
	if(color==1)
	{
		printf("Stop");
	}
	else if(color==2)
	{
		printf("slow down");
		
	}
	else if(color==3)
	{
		printf("GO");
		
	}
	else
	{
		printf("Enter valid number(1to3)");
	}
}
