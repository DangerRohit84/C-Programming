#include<stdio.h>
int main()
{
	char name[50];
	printf("Enter the Name :");
	scanf("%s",name);
	int vowel=0,con=0;
	for(int i=0;name[i]!='\0';i++)
	{
		if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u' && name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U')
		{
			vowel++;
		}
		else
		{
			con++;
		}
	}
	printf("Number of Vowels in string is %d\n",vowel);
	printf("Number of Consonants in string is %d",con);
	
}
