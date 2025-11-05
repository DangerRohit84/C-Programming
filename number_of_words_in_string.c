#include<stdio.h>
int main()
{
	char name[50];
	int words=0;
	gets(name);
	for(int i=0;name[i]!='\0';i++)
	{
		if(name[i]==' ')
		{
			words++;
		}
		
	}
	printf("Total Number of Words is %d",words+1);
	return 0;
}
