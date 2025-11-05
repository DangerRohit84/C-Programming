#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    char word[50];  
	gets(str);
	int len=strlen(str);
	int i,j=0;
    for(i=len-1;i>=0;i--)
    {
    	word[j]=str[i];
    	j++;
	}
	printf("reverse of string => %s",word);
}
