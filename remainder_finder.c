#include<stdio.h>
int main()
{
	char ch;
	do
	{
	int a,b,c,d;
	printf("Enter the any positive numbers A and B :");
	scanf("%d %d",&a,&b);
	c=a%b;
	d=a/b;
	printf("Remainder = %d\n",c);
	printf("Quotient = %d\n",d);
	fflush(stdin);
	printf("Do you want to continue (Y/N):");
	scanf("%c",&ch);
	}while(ch=='Y');
	getch();
	return 0;
}
