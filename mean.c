#include<stdio.h>
int main()
{
	int n1,n2,n3,n4,n5,n6,sum;
	float mean;
	printf("enter the n values of n1,n2,n3,n4,n5,n6 :");
	scanf("%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6);
	sum=n1+n2+n3+n4+n5+n6;
	mean=sum/6.0;
	printf("the mean is %.2f",mean);
}
