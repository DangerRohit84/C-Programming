#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("You are Eligible to vote\n");
	}
	else
	{
		printf("Sorry,You are not Eligible to vote\n");
		printf("Please wait %d more years to vote\n",18-age);
		
	}
	printf("Thank You For Using this Application");
}
