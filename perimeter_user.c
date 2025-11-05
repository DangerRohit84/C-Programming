#include<stdio.h>
int main()
{
	int Length,Breadth,Perimeter;
	printf("Enter The Length And Breadth:");
	scanf("%d%d",&Length,&Breadth);
	Perimeter=2*(Length+Breadth);
	printf("Length= %d Breadth= %d\n",Length,Breadth);
	printf("The Perimeter Is %d",Perimeter);
	getch();
}
