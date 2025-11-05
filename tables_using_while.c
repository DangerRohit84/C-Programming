#include<stdio.h>
int main()
{
	int i=1,n,m;
	printf("Enter the number you want table :");
	scanf("%d",&n);
	printf("Enter the number up to you need :");
	scanf("%d",&m);
	while(i<=m)
	{
		printf("%d X %d = %d\n",n,i,i*n);
		i++;
	}
}
