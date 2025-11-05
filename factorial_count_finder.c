#include<stdio.h>
int main()
{
    int i=1,n;
    scanf("%d",&n);
    while(i<=n)
    {

        if(n%i==0)
        {
        	
            printf("%d ",i);
            
        }
        i++;
    }
}
//	int i,c=2;
//
//	for(i=2;i<=a/2;i++)
//	{
//		if(a%i==0)
//		{
//		c++;
//		}
//	}
