#include<stdio.h>
void swap(int *,int *);
int main()
{
	int a,b;
	printf("Enter any two positive numbers : ");
	scanf("%d %d",&a,&b);
	printf("Before swaping numbers are : ");
	printf("%d %d\n",a,b);
	swap(&a,&b);
	printf("After swaping numbers are : ");
	printf("%d %d\n",a,b);
}
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
