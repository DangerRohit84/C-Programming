#include<stdio.h>
int main()
{
    int r1,c1;
    scanf("%d%d",&r1,&c1);
    int m1[r1][c1];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    int r2,c2;
    scanf("%d%d",&r2,&c2);
    int m2[r2][c2];
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
        	printf("%d ",m1[i][j]+m2[i][j]);
        }
        printf("\n");
    }
}
