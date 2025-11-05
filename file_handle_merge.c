#include<stdio.h>
int main(int argc, char *argv[])
{
	FILE *f1,*f2,*f3;
	f1=fopen(argv[1],"r");
	f2=fopen(argv[2],"r");
	f3=fopen(argv[3],"w+");
	if(f1==NULL || f2==NULL || f3== NULL)
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
		fputc(ch,f3);
	}
	while(1)
	{
		ch=fgetc(f2);
		
		if(ch==EOF)
			break;
		fputc(ch,f3);
	}
	printf("File Successfully Merge");
	fclose(f1);
	fclose(f2);
	fclose(f3);
	return 0;	
}
