#include<stdio.h>
int main()
{
	char s1[100],s2[100];
	printf("Enter the string: ");
	scanf("%[^\n]s",&s1);
	int i;
	for(i=0;s1[i]!='\0';i++)
	{
		s2[i]=s1[i];
	}
	s2[i]='\0';
	printf("string1 is :%s\n",s1);
	printf("string2 is :%s",s2);
	return 0;
}

