#include<stdio.h>
int main()
{
	int marks;
	printf("Enter the student marks(1-100):");
	scanf("%d",&marks);
	if(marks>=90)
	{
		printf("Grade A");
	}
	else if(marks>=80)
	{
		printf("Grade B");
	}
	else if(marks>=70)
	{
		printf("Grade C");
		
	}
	else if(marks>=60)
	{
		printf("Grade D");
	}
	else if(marks<60)
	{
		printf("Grade F");
	}
	else
	{
		printf("Enter the valid marks");
	}
}
