#include<stdio.h>
int main()
{
	char V,I,B,G,Y,O,R,ch;
	printf("Enter the Rinbow Colors First Letter in capital :");
	scanf("%c",&ch);
	if(ch=='V')
	{
		printf("violet");
	}
	else if(ch=='I')
	{
		printf("indigo");
	}
	else if(ch=='B')
	{
		printf("blue");
	}
	else if(ch=='G')
	{
		printf("green");
	}
	else if(ch=='Y')
	{
		printf("yellow");
	}
	else if(ch=='O')
	{
		printf("orange");
	}
	else if(ch=='R')
	{
		printf("red");
	}
	else
	{
		printf("Enter valid Rinbow color letter");
	}

}
