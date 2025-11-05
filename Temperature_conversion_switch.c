#include<stdio.h>
int main()
{
	int N;
	float C,F,K;
	printf("Enter the number(1 to 3) from the below :\n");
	printf("1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n3. Celsius to Kelvin\n");
	scanf("%d",&N);
	switch(N)
	{
		case 1:
			printf("Enter the Celsius value :");
			scanf("%f",&C);
			F=((C*9)/5.0)+32;
			printf("the Fahrenheit is %.2f",F);
			break;
		case 2:
			printf("Enter the Fahrenheit value :");
			scanf("%f",&F);
			C=(F-32)*(5/9.0);
			printf("the Celsius is %.2f",C);
			break;
		case 3:
			printf("Enter the Celsius value :");
			scanf("%f",&C);
			K=C+273.15;
			printf("the Kelvin is %.2f",K);
			break;
		default:
			printf("Enter the valid number(1 to 3)");
			break;
			
	}
}
