#include<stdio.h>
int main()
{
	FILE *f1;
	f1=fopen("friends.txt","r");
	if(f1==NULL)
	{
		printf("File Connection failed\n");
		return 1;
	}
	int c=0,wc=0,lc=0;
	char ch;
	while(1)
	{
		ch=fgetc(f1);
		if(ch==EOF)
			break;
		c++;
		if(ch==' ' || ch=='\n')
		{
			wc++;
		}
		if(ch=='\n')
		{
			lc++;
		}
	}
	printf("\nCharacter Count is : %d\n",c);
	printf("Word Count is : %d\n",wc);
	printf("Line Count is : %d\n",lc);
	fclose(f1);
	return 0;
}
