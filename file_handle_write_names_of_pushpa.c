#include<stdio.h>
int main()
{
	FILE *f1;
	f1=fopen("Kissik.txt","w+");
	if(f1==NULL)
	{
		printf("File Connection failed\n");
		return 1;
	}
	char ch;
	while(1)
	{
		scanf("%c",&ch);
		if(ch=='$')
			break;
		fputc(ch,f1);
	}
	fclose(f1);
	return 0;
	
	
	
	
}
