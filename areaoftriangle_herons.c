#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float s,area;
	printf("Enter the sides value a,b and c :");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2.0;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Semiperimeter is %.4f\n",s);
	printf("Area of triangle is %.4f",area);
	
}
