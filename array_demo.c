#include<stdio.h>
int main()
{
	int marks[6]={11,22,33,44,55,66};
	int sum=0;
	for(int i=0;i<6;i++)
	{
		printf("%d \n",marks[i]);
	}
//	printf("%d ",sum);
for(int i=0;i<6;i++)
{
	sum=sum+marks[i];
		printf("%d ",sum);
}
}
