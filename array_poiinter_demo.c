#include<stdio.h>
int main()
{
	int arr[5]={100,200,300,400,500};
	int *ptr;
	ptr=arr;
	for(int i=0;i<5;i++)
	{
		printf("%u => %d\n",(ptr+i),*(ptr+i));
	}
}
