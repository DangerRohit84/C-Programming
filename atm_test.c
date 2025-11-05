#include<stdio.h>
int main()
{
	int a,t,n1,n2,n3;
	printf("Enter the Amount to withdrawal : ");
	scanf("%d",&a);
	if(a==100)
	{
		printf("Please Enter the amount is multiple of 100");
	}
	n1=a/2000;
	a=a%2000;
	n2=a/500;
	a=a%500;
	n3=a/100;
	t=n1+n2+n3;
	printf("%d",t);
}

