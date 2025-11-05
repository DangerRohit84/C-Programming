#include<stdio.h>
int main()
{
	int n,r,c=0,rc=0;
	scanf("%d",&n);
	int m = n % 10 , count = 0;
	while(n>0)
	{
		r=n%10;
		rc++; //199
		if(r == m) {
			count++;
		}
		n=n/10;
	}
	if(count==rc)
	{
		printf("Fancy");
	}
	else
	{
		printf("Not a Fancy");
	}
}
