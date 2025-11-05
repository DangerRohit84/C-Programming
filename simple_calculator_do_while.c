#include<stdio.h>
int main()
{
	int option,num1,num2;
	char choice;
	do
	{
	printf("1. Addtion\n2. Subtraction\n3. Multiplication\n4. Divition\n5. Modulous\n");
	printf("Enter the option :\n");
	scanf("%d",&option);
	printf("Enter the any two values :\n");
	scanf("%d %d",&num1,&num2);
	switch(option)
	{
		case 1:
			printf("sum : %d\n",num1+num2);
			break;
		case 2:
			printf("diff : %d\n",num1-num2);
			break;
		case 3:
			printf("product : %d\n",num1*num2);
			break;
		case 4:
			if(num2!=0)
			{
				printf("div : %d\n",num1/num2);
			}
			else
			{
				printf("zero cannot divided \n");
			}
			break;
		case 5:
			if(num2!=0)
			{
				printf("mod : %d\n",num1%num2);
			}
			else
			{
				printf("Modulous is valid\n");
			}
			printf("%d",num1%num2);
			break;
		default:
		    printf("Please,Enter the valid option\n");
		    break;
	}
		fflush(stdin);
		printf("Do you want to continue....(Y/N) \n");
		scanf("%c",&choice);
		
		
		    
	}while(choice=='Y' || choice=='y');
	printf("Thank you for using my simple calculator");
	return 0;
	
}
