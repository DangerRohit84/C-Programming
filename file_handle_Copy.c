#include<stdio.h>
int main()
{
	FILE *f1,*f2;
	f1=fopen("friends.txt","r");
	f2=fopen("Friends Names","w+");
	if(f1==NULL || f2==NULL)
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
		fputc(ch,f2);
	}
	printf("File Successfully Copied");
	fclose(f1);
	fclose(f2);
	return 0;	
}
