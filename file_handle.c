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
	char ch;
	while(1)
	{
		ch=fgetc(f1);
		if(ch==EOF)
			break;
		printf("%c",ch);
	}
	fclose(f1);
	getch();
	return 0;
	
}
