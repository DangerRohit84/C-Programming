//#include<stdio.h>
//int main()
//{
//    char string[50];
//    gets(string);
//    int c=0,i;
//    for(char d='0';d<='9';d++)
//    {
//    	for(int i=0;string[i]!='\0';i++)
//    	{
//    	if(string[i]==d)
//    	{
//    	c++;	
//		}
//		}
//		if(c>0)
//		{
//		printf("%c => %d\n",d,c);
//        c=0;
//		}
//    }
//    return 0;
//}
//

#include <stdio.h>
int main() {
    char str[50];  
    int count[10]={0};  
   gets(str);
    for (int i = 0; str[i] != '\0'; i++) {
           count[str[i]-'0']++;
    }
    for(int i=0;i<10;i++)
    {
		if (count[i]!=0) {
            printf("%d -> %d\n", i, count[i]);
        }
    }
    
    
    return 0;
}

