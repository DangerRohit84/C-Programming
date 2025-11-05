#include<stdio.h>
int main()
{
	int u;
	float c,t,s;
	printf("Enter the consumed Units :");
	scanf("%d",&u);
	if(u<=50)
	{
		c=u*0.50;
		
	}
	else if(u>50 && u<=150)
	{
		c=50*0.50+(u-50)*0.75;
	}
	else if(u>150 && u>250)
	{
		c=u*0.50+(u-50)*0.75+(u-100)*1.20;
	}
	else
	{
		c=u*0.50+(u-50)*0.75+(u-100)*1.20+(u-150)*1.50;
	}
	t=c +c*0.2;
	printf("Electricity bill is %.2f",t);
}
