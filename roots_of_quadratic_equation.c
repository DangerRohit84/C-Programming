#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,i;
	double d,r1,r2,img;
	printf("ax^2+bx+c it is the quadratic form\n");
	printf("Enter the coefficients of a,b and c :");
	scanf("%d%d%d",&a,&b,&c);
	d=(b*b-4*a*c);
	if(d==0)
	{
		r1=-b/(2*a);
		r2=-b/(2*a);
		printf("Roots are equal\n");
	}
	else if(d>0)
	{
		printf("Roots are Real\n");
		r1=(-b+sqrt(d))/(2*a);
	    r2=(-b-sqrt(d))/(2*a);
	}
	else
	{
		r1=(-b+sqrt(d)*i)/(2*a);
		r2=(-b-sqrt(d)*i)/(2*a);
		
		printf("Roots are Imaginary\n");
	}
	printf("Roots are %.2lf and %.2lf",r1,r2);
}
