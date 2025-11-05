#include<stdio.h>
int f(int);
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a=f(n);
    int b=f(m);
    if(a==m && b==n)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}
int f(int a)
{
    int sum=0;
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
        {
            sum=sum+i;
        }
    }
    return sum;
}
