#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int num[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(i+j==n-1)
				sum=sum+num[i][j];
		}
	}
	printf("Sum of 2D anti diagonal array numbers is %d",sum);
	return 0;
}
