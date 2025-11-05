#include<stdio.h>
int main()
{
	int n=10,m=15;
	printf("****************************** Welcome to Theater Seat Booking ******************************\n");
	printf("Avaliable seats are below (0 is Avaliable seats and 1 is Booked seats)\n");
	int num[10][15]={0};
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d ",num[i][j]);
		}
		printf("\n");
	}
	printf("Enter the row (0-9) and colunm (0-14) :");
	int a,b;
	scanf("%d%d",&a,&b);
	num[a][b]=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
		printf("%d ",num[i][j]);
		}
		printf("\n");
	}
	
	
}



