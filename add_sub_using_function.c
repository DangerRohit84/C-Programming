#include<stdio.h>
int addition(int,int);
void substaction(int,int);
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	int r=addition(x,y);
	printf("addition = %d\n",r);
	substraction(x,y);
}
int addition(int n,int m)
{
	int sum=n+m;
	return sum;
}
void substraction(int n,int m)
{
	int diff=n-m;
	printf("substraction = %d",diff);
}
