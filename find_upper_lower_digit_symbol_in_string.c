#include<stdio.h>
int main()
{
	char item[10];
	printf("Enter the product:");
	scanf("%s",item);
	int upper_c=0,lower_c=0,digit_c=0,symbol_c=0;
	for(int i=0;item[i]!='\0';i++)
	{
		if(item[i]>='A' && item[i]<='Z')
		{
			upper_c++;
		}
		else if(item[i]>='a'&& item[i]<='z')
		{
			lower_c++;
		}
		else if(item[i]>='0' && item[i]<='9')
		{
			digit_c++;
		}
		else
		{
			symbol_c++;
		}
	}
	printf("Number of Upper case Letters in string is: %d\n",upper_c);
	printf("Number of Lower case Letters in string is: %d\n",lower_c);
	printf("Number of Digits in string is: %d\n",digit_c);
	printf("Number of Symbols in string is: %d",symbol_c);
}
