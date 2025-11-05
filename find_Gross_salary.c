#include<stdio.h>
int main()
{
	int s;
	float H,D,GS;
	printf("Enter your salary: ");
	scanf("%d",&s);
	if(s<=10000)
	{
		H=s*0.2;
		D=s*0.8;
	}
	else if(s>10000 && s<=20000)
	{
		H=s*0.25;
		D=s*0.9;
	}
	else
	{
		H=s*0.3;
		D=s*0.95;
	}
	GS=s+H+D;
	printf("Gross Salary is %.2f",GS);
	return 0;

}

