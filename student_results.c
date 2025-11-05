#include<stdio.h>
int main()
{
	int E,H,M,P,C,T;
	float A;
	printf("Note:please Enter marks in below order only\n");
	printf("Enter the marks of English,Hindi,Maths,Physics and Chemistry :");
	scanf("%d %d %d %d %d",&E,&H,&M,&P,&C);
	T=E+H+M+P+C;
	A=T/5.0;
	if(E>=40 && H>=40 && M>=40 && P>=40 && C>=40)
	{
		printf("You Passed and Total marks is %d\n",T);
	if(A>=60)
	{
		printf("You Got Grade A\n");
		
	}
	else if(A>=50 && A<60)
	{
		printf("You Got Grade B\n");
	}
	else
	{
		printf("You Got Grade C\n");
	}
		
	}
	else
	{
		printf("You Failed and Total marks is %d\n",T);
	}
	
	return 0;
	
}
