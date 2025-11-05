#include<stdio.h>
union demo{
	int a;
	char b;
	float c;
};

int main()
{
	union demo u;
	u.a=98;
	printf("%d\n",u.a);
	u.b='a';
	printf("%c\n",u.b);
	u.c=99.00;
	printf("%.2f\n",u.c);
//	printf("%d\n%c\n%.2f",u.a,u.b,u.c);
	return 0;
}
