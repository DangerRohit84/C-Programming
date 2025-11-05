#include<stdio.h>
int main()
{
	float x1,x2,x3,y1,y2,y3,x,y;
	printf("Enter the coordinates of x1 and y1 :");
	scanf("%f%f",&x1,&y);
	printf("Enter the coordinates of x2 and y2 :");
	scanf("%f%f",&x2,&y2);
	printf("Enter the coordinates of x3 and y3 :");
	scanf("%f%f",&x3,&y3);
	x=(x1+x2+x3)/3.0;
	y=(y1+y2+y3)/3.0;
	printf("the centroid of triangle is x and y : %.2f,%.2f",x,y);
	
}
