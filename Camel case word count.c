#include<stdio.h>
int main()
{
    char name[104];
    scanf("%s",name);
    int c=1;
    for(int i=1;name[i]!='\0';i++)
    {
       
        
        if(name[i]>='A' && name[i]<='Z')
        {
            c++;
        }
    }
    printf("%d",c);
}
