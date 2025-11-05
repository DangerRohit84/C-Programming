#include<stdio.h>
int main()
{
	int num1,num2;
	char ao;
	printf("enter any two numbers : ");
	scanf("%d%d",&num1,&num2);
	printf("+ - Addition\n- - Subtraction\n* - Multiplication\n/ - Division\n%% - Modulous\n");
	printf("Enter the arthematic operation symbol from above :\n");
	fflush(stdin);
	scanf("%c",&ao);
	switch(ao)
	{
		case '+':
			printf("%d",num1+num2);
			break;
		case '-':
			printf("%d",num1-num2);
			break;
		case '*':
			printf("%d",num1*num2);
			break;
		case '/':
			if(num2!=0)
			{
				printf("%d",num1/num2);
			}
			else
			{
				printf("zero cannot divided ");
			}
			break;
		case '%':
			printf("%d",num1%num2);
			break;
		default:
		    printf("Please,Enter the valid symbol form given option");
		    break;
		    
			    
				
			
	}
	return 0;
}

