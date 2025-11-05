#include<stdio.h>
int main()
{
	float A,D,PA;
	printf("Enter the purchase amount in dollars($) :");
	scanf("%f",&PA);
	if(PA<300)
	{
		A=PA-D;
		printf("no discount is applied\n");
		printf("The Amount you have to pay is %.2f$",A);
	}
	else if(PA>=300 && PA<500)
	{
		D=PA*0.1;
		A=PA-D;
		printf("10%% discount is applied\n");
		printf("The Amount You have to pay is %.2f$",A);
	}
	else if(PA>=500)
	{
		D=PA*0.2;
		A=PA-D;
		printf("20%% discount is applied\n");
		printf("The Amount You Have to pay is %.2f$",A);
	}
	else
	{
		printf("please enter valid purchase amount");
	}
}
