#include<stdio.h>
int main()
{
	float x1,x2,y1,y2,m;
	printf("Enter the point (x1,y1): ");
	scanf("%f,%f",&x1,&y1);
	printf("Enter the point (x2,y2): ");
	scanf("%f,%f",&x2,&y2);
	m=(y2-y1)/(x2-x1);
	printf("slope of line is %.2f",m);
	
}
