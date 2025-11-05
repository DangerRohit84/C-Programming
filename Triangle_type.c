#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the sides: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b==c)
    {
	printf("Equilatoral");
	}
	if((a==b) || (a==c) || (b==c))
	{
		printf("Isosceles");
	}
	else
	{
		printf("Scalence");
	}
}
