#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the sides a,b and c :");
	scanf("%d%d%d",&a,&b,&c);
	if((a+b>c) && (a+c>b) && (b+c>a))
	{
		printf("valid triangle");
	}
	else
	{
		printf("not valid triangle");
	}
}
