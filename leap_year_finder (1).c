#include<stdio.h>
int main()
{
	int Y,A;
	printf("Enter the year :");
	scanf("%d",&Y);
	A=Y%4;
	if(A==0)
	{
		printf("It is a Leap year");
	}
	else
	{
		printf("It is a Not Leap Year");
	}
}
