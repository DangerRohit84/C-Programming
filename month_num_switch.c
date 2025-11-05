#include<stdio.h>
int main()
{
	int Month_num;
	printf("Enter the month number(1 to 12): ");
	scanf("%d",&Month_num);
	switch(Month_num)
	{
		case 3:
		case 4:
		case 5:
			printf("Summer");
			break;
		case 6:
		case 7:
		case 8:
		case 9:
			printf("Rainy");
			break;
		case 1:
		case 2:
		case 10:
		case 11:
		case 12:
			printf("Winter");
			break;
		default:
			printf("please enter the valid month number (1 to 12)");
			break;
	}
	return 0;
}
