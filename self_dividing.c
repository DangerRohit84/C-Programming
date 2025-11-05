/* #include<stdio.h>
void s(int);
int main()
{
    int x,y,i;
    scanf("%d %d",&x,&y);
    for(i=x;i<=y;i++)
    {
       s(i);
    }
}
void s(int n)
{
    int r,t=n;
        while(n>0)
        {
        r=n%10;
        if(t%r==0)
        {
            if(r==0)
            {
            	break;
            }
            else
            {
            	printf("%d ",t);
			}
            
        }
        n=n/10;
        }
}
*/

#include<stdio.h>
void s(int);
int main()
{
    int x,y,i;
    scanf("%d %d",&x,&y);
    for(i=x;i<=y;i++)
    {
       s(i);
    }
}
void s(int n)
{
    int r,t=n;
    int isSelfDividing = 1;
        while(n>0)
        {
        r=n%10;
        
            if (r == 0 || t % r != 0) {
            isSelfDividing = 0;
            break;
            }
        
        n=n/10;
        }
        if (isSelfDividing==1) {
        printf("%d ", t);
    }
    
}






        
    

