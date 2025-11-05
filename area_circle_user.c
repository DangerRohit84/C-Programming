#include<stdio.h>
int main()
{
	int radius;
	float pi=3.142f,area;
	printf("Enter the Radius:");
	scanf("%d",&radius);
	area=pi*radius*radius;
	printf("area of Circle is %f",area);
}
