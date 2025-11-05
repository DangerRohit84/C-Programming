#include<stdio.h>
int main()
{
	char M[8][8]={{'B','W','B','W','B','W','B','W'},
				  {'W','B','W','B','W','B','W','B'},
				  {'B','W','B','W','B','W','B','W'},
				  {'W','B','W','B','W','B','W','B'},
				  {'B','W','B','W','B','W','B','W'},
				  {'W','B','W','B','W','B','W','B'}};
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			
			printf("%c ",M[i][j]);
			
		
		}
		printf("\n");
	}
}
