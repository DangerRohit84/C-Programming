
#include<stdio.h>
#include<string.h>
int main()
{
int n,i;
scanf("%d",&n);

	for(i=1;i<=n;i++)
	{	
		if(i==4)
			break;
		printf("%d ",i);
	}
	printf("Task completed");
}
