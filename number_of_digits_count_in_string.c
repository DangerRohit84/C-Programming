#include<stdio.h>
int main()
{
    char string[104];
    gets(string);
    int sum=0;
    for(int i=0;string[i]!='\0';i++)
    {
        if(string[i]>='0' && string[i]<='9')
        {	if(string[i]==i)
            	sum++; 	
        }
		printf("%c => %d\n",string[i],sum);
            	sum=0;
    }
    return 0;
}
