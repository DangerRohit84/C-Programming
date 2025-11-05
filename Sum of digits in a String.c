#include<stdio.h>
int main()
{
    char string[104];
    gets(string);
    int sum=0;
    for(int i=0;string[i]!='\0';i++)
    {
        if(string[i]>='0' && string[i]<='9')
        {
            sum=sum+(string[i]-'0');
        }
    }
    printf("%d",sum);
    return 0;
}
