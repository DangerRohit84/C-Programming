#include<stdio.h>
int main()
{
	int n=10;
	char c='R';
	double m=9.000;
	
	void *p;
	p=&n;
	printf("%d\n",*(int *)p);
	p=&m;
	printf("%lf\n",*(double *)p);
	p=&c;
	printf("%c\n",*(char *)p);
}
