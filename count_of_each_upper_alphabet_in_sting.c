#include<stdio.h>
#include<string.h>
int main() {
    char str[50];  
    int count[26]={0};  
   gets(str);
   printf("Original String is %s\n",str);
   strupr(str);
   printf("Upper case String is %s\n",str);
    for (int i = 0; str[i] != '\0'; i++) {
           count[str[i]-65]++;
    }
    for(int i=0;i<26;i++)
    {
		if (count[i]!=0) {
            printf("%c -> %d\n", (char)i+65, count[i]);
        }
    }
    
    
    return 0;
}

