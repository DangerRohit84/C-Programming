#include<stdio.h>
int main()
{
	int Length,Breadth,Area;
	printf("Enter The Length And Breadth:");
	scanf("%d%d",&Length,&Breadth);
	Area=Length*Breadth;
	printf("Length= %d Breadth= %d\n",Length,Breadth);
	printf("The Area Is %d",Area);
}
