#include<stdio.h>
#include<string.h>
int main()
{
    char A[50];
    char B[50];
	char C[100];
	gets(A);
	gets(B);
	int i,j=0;
	for(i=0;A[i]!='\0';i++)
	{
		C[j]=A[i];
		j++;
	}
	C[j]=' ';
	j++;
	for(i=0;B[i]!='\0';i++)
	{
		C[j]=B[i];
		j++;
	}
	C[j]='\0';
	printf("First string => %s\n",A);
	printf("Second string => %s\n",B);
	printf("Concatination string => %s",C);
	return 0;
	
}
