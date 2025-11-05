#include<stdio.h>
#include<stdlib.h>			// For malloc,calloc,.....
int main()
{
	int *ptr=(int *) malloc(sizeof(int));
	printf("The Address of ptr is %u\n",ptr);
	*ptr=50;
	printf("The value of ptr is %d\n",*ptr);
	free(ptr);
	return 0;
}
