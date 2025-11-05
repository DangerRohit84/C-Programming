#include<stdio.h>
int main()
{
    char str[50];
    char word[50];  
	gets(str);
	int i;
    for(i=0;str[i]!='\0';i++)
    {
    	word[i]=str[i];
	}
	word[i]='\0';
	printf("Orginal string is %s\n",str);
	printf("Copy of string is %s",word);
}
