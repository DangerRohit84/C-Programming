#include<stdio.h>
int add(int,int);
int substract(int,int);
int mul(int,int);
int div(int,int);
int mod(int,int);
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	int sum=add(x,y);
	printf("addition = %d\n",sum);
	int dif=substract(x,y);
	printf("substraction = %d\n",dif);
	int mult=mul(x,y);
	printf("product = %d\n",mult);
	int divi=div(x,y);
	printf("divison = %d\n",divi);
	int modu=mod(x,y);
	printf("product = %d\n",modu);
}
int add(int n,int m)
{
	return n+m;
}
int substract(int n,int m)
{
	return n-m;
}
int mul(int n,int m)
{
	return n*m;
}
int div(int n,int m)
{
	return n/m;
}
int mod(int n,int m)
{
	return n%m;
}
