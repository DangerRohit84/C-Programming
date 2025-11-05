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
	int c=0;
	while(1)
	{
		ch=fgetc(f1);
		if(ch==EOF)
			break;
		printf("%c",ch);
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' && ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
			c++;
	}
	printf("\nThe Vowels Count is : %d",c);
	fclose(f1);
	return 0;
}
