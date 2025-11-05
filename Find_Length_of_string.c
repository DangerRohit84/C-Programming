#include<stdio.h>
int main()
{
	char item[10];
	printf("Enter the product:");
	scanf("%s",item);
	int len=0;
	for(int i=0;item[i]!='\0';i++)
		len++;
	printf("Length of Given String is: %d",len);
}
