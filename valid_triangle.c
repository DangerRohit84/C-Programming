#include<stdio.h>
int main()
{
	int a1,a2,a3,sum;
	printf("Enter the Angles of Triangle:");
	scanf("%d%d%d",&a1,&a2,&a3);
	sum=a1+a2+a3;
	if(sum == 180)
	{
		printf("yes,It is valid Triangle");
		
	}
	 else
	 {
	 	printf("no,It is not a valid Triangle");
		 	 }
}

