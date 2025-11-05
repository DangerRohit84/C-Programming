#include<stdio.h>
int main()
{
	int Y;
	printf("Enter the year :");
	scanf("%d",&Y);
	if(Y%400==0)
	{
		printf("It is a Leap year");
	}
	else if(Y%100==0)
	{
		printf("It is a Not Leap Year");
	}
	else if(Y%4==0)
	{
		printf("It is a Leap year");
	}
	else
	{
		printf("It is a Not Leap Year");
	}
}
