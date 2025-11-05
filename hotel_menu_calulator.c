#include<stdio.h>
int main()
{
	int option,n,rs,bill,sum=0;
	char choice;
	do
	{
	printf("1. Poori(1) - 15Rs\n2. Bonda(4) - 20Rs\n3. Vada(2) - 20Rs\n4. Dosa(1) - 25Rs\n5. Idly(4) -20Rs\n6. Parota(1) - 25Rs\n");
	printf("Enter the option(1-6) :\n");
	scanf("%d",&option);
	printf("How many do you want:\n");
	scanf("%d",&n);
	switch(option)
	{
		case 1:
			rs=15;
			bill=rs*n;
			printf("Your Bill is %d\n",bill);
			break;
		case 2:
			rs=20;
			bill=rs*n;
			break;
		case 3:
			rs=20;
			bill=rs*n;
			break;
		case 4:
			rs=25;
			bill=rs*n;
			break;
		case 5:
			rs=20;
			bill=rs*n;
			break;
		case 6:
			rs=25;
			bill=rs*n;
			break;
		default:
		    printf("Please,Enter the valid option(1-6)\n");
		    break;
	}
		fflush(stdin);
		printf("Do you want to order any thing else....(Y/N) \n");
		scanf("%c",&choice);
		sum=sum+bill;
		
		
		    
	}while(choice=='Y' || choice=='y');
	printf("Your Total bill is %d\n",sum);
	printf("Thank you for visiting to our Hotel \n");
	return 0;
	
}
