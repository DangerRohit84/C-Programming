#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	gets(str);
	int len=strlen(str);
	int flag=0;
	strupr(str);
	for(int i=0;i<len/2;i++)
	{
		if(str[i]!=str[len-i-1])
		{
			flag=1;
			break;
		}
		
	}
	if(flag==0)
	{
		printf("Given %s string is palandrome",str);
	}
	else
	{
		printf("Given %s string is not palandrome",str);
	}
  return 0;
}



