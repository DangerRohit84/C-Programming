#include<stdio.h>
int main()
{
	char name[50];
	int words=0;
	gets(name);
	for(int i=0;name[i]!='\0';i++)
	{
		if(name[i]!=' ' && name[i]!='\n')
		{
			words++;
		}
		else if(words>0)
		{
			printf("%d\n",words);
			words=0;
		}
		
	}
	if(words>0)
	{
		printf("%d",words);
	}
	
	return 0;
}
