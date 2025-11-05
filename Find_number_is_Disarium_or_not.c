#include<stdio.h>
#include<math.h>
int c(int);
int d(int);
int main()
{
    int n;
    scanf("%d",&n);
    int r=d(n);
    if(r==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
int c(int n)
{
    int r,c=0;
    while(n>0)
    {
        c++;
        n=n/10;
    }
    return c;
}
int d(int n)
{
    int r,sum=0;
    int dc=c(n);
    while(n>0)
    {
        r=n%10;
        sum=sum+(pow(r,dc));
        n=n/10;
        dc--;
    }
    return sum;
}
