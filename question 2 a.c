#include<stdio.h>
int main()
{
	char s[100];
	printf("Enter the string: ");
	scanf("%[^\n]s",&s);
	int count=0;
	for(int i=0;s[i]!='\0';i++)
	{
		count++;
	}
	printf("The length of the string is %d",count);
	return 0;
}
