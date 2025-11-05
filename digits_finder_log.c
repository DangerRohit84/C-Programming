#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int digit=(int)log10(n)+1;
	printf("No of digits of a given number %d is %d",n,digit);
	return 0;
}
