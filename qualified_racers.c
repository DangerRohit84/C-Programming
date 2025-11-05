#include<stdio.h>
int main()
{
	int r1,r2,r3;
	float avg;
	
	scanf("%d%d%d",&r1,&r2,&r3);
	
	avg=(r1+r2+r3)/3.0;
	
	printf("the average speed is %.2f\n",avg);
	printf("The qualified racers speeds are :");
	if(r1>avg)
	{
		printf("%d\n",r1);
	}
	if(r2>avg)
	{
		printf("%d\n",r2);
		
	}
	if(r3>avg)
	{
		printf("%d",r3);
	}
}
