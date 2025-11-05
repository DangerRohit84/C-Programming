#include<stdio.h>
int main()
{
	float height,breadth,area;
	printf("Enter the height of triangle\n");
	scanf("%f",&height);
	printf("Enter the Breadth of triangle\n");
	scanf("%f",&breadth);
	area= 1/2.0f*height*breadth;
	printf("area of triangle :%f",area);
	getch();
}
