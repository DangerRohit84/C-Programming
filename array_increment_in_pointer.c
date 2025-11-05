#include<stdio.h>
void increment(int* p,int n)
{
	for(int i=0;i<n;i++)
	{
		p[i]++;
	}
	printf("After increment of Array\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(p+i));
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int num[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("Before Increment of Array\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",num[i]);
	}
	printf("\n");
	int *p;
	p=num;
	increment(p,n);
}
