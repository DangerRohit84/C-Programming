#include<stdio.h>
int main()
{
	int ao;
	float num1,num2;
	printf("enter any two numbers : ");
	scanf("%f%f",&num1,&num2);
	printf("1. + - Addition\n2. - - Subtraction\n3. * - Multiplication\n4. / - Division\n5. EqualorNot\n");
	printf("Enter the arthematic operation number from above :\n");
	scanf("%d",&ao);
	switch(ao)
	{
		case 1:
			printf("%f",num1+num2);
			break;
		case 2:
			printf("%f",num1-num2);
			break;
		case 3:
			printf("%f",num1*num2);
			break;
		case 4:
			if(num2!=0)
			{
				printf("%.2f",num1/num2);
			}
			else
			{
				printf("zero cannot divided ");
			}
			break;
		case 5:
			if(num1==num2)
			{
				printf("The Given numbers are equal");
			}
			else
			{
				printf("The given numbers are not equal");
			}
			break;
		default:
			printf("Enter valid numbers (1 to 5)");
			break;
	}
	return 0;
}
