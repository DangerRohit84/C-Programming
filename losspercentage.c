#include<stdio.h>
int main()
{
    int cp,sp,l;
    float lp;
    scanf("%d %d",&cp,&sp);
    l=cp-sp;
    lp=(l)/100.0;
    printf("%.2f",lp);
}
