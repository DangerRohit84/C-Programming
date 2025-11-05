#include<stdio.h>
int main()
{
	char alphabet;
	printf("Enter the alphabet :");
	scanf("%c",&alphabet);
	if(alphabet>= 'A' && alphabet<='Z')
	{
		printf("The given alphabet %c is uppercase",alphabet);
	}
	else if(alphabet>= 'a' && alphabet<= 'z')
	{
		printf("The given alphabet %c is lowercase",alphabet);
		
	}
	else
	{
		printf("It is invalid ");
	}
}




