#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the any positive numbers A and B :");
	scanf("%d %d",&a,&b);
	c=a%b;
	d=a/b;
	printf("Remainder = %d\n",c);
	printf("Quotient = %d",d);
	getch();
	return 0;
}
