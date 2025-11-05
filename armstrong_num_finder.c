#include<stdio.h>
#include<math.h>
int findarmstrong(int);
int main()
{
	int n;
	printf("Enter the possitve number :");
	scanf("%d",&n);
	int re=findarmstrong(n);
	if(re==n)
	{
		printf("The given number %d is armstrong",n);
	}
	else
	{
		printf("The given number %d is not armstrong",n);
	}
}
int findarmstrong(int n)
{
	int r,sum=0;
	int d=(int)log10(n)+1;
	while(n>0)
	{
	  	r=n%10;
		sum=sum+(int)pow(r,d);
		n=n/10;
			
	}
	return sum;
}
