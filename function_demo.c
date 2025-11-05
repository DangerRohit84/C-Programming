#include<stdio.h>
void wish();
int main()
{
	printf("Before Function Call\n");
	wish();
	printf("After Function Call\n");
	return 0;
}
void wish()
{
	printf("Hello World !\n");
}

