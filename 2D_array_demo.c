#include<stdio.h>
int main()
{
	int M[2][5]={{11,22,33,44,55},{89,45,56,78,98}};
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<5;j++)
		{
			printf("%d ",M[i][j]);
		}
		printf("\n");
	}
	return 0;
}
