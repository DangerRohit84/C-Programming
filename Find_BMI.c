#include<stdio.h>
int main()
{
	float weight,height,BMI;
	printf("Enter the weight and height :");
	scanf("%f %f",&weight,&height);
	BMI=weight/height;
	if(BMI<18.5)
	{
		printf("Underweight");
		
	}
	else if(BMI>=18.5 && BMI<24.9)
	{
		printf("Normal weight");
		
	}
	else if(BMI>=30)
	{
		printf("Obesity");
	}
	else
	{
		printf("Please Enter Valid number");
	}
}
