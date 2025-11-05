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
	printf("Exterior design :");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if (i == 0 || i == n-1 || j == 0 || j == m-1)
			{
				printf("%d ",num[i][j]);
			}
		}
	}
	printf("\nIntirior design :");
	for(int i=0;i<n-1;i++)
	{
		for(int j=1;j<m-1;j++)
		{
			printf("%d ",num[i][j]);
			
		}
	}
}


//#include<stdio.h>
//int main()
//{
//	int num[4][4]={0};
//	for(int i=0;i<4;i++)
//	{
//		for(int j=0;j<4;j++)
//		{
//			if (i == 0 || i == 4-1 || j == 0 || j == 4-1)
//			{
//				num[i][j]=1;
//			}
//			else
//			{
//				num[i][j]=0;
//			}
//		}
//	}
//	for(int i=0;i<4;i++)
//	{
//		for(int j=0;j<4;j++)
//		{
//			printf("%d ",num[i][j]);
//		}
//		printf("\n");
//	}
//}
