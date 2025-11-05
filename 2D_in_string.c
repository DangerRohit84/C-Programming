#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	char names[n][30];
	for(int i=0;i<n;i++)
	{
		scanf("%s",&names[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%s\n",names[i]);
	}
}
