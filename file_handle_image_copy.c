#include<stdio.h>
int main()
{
	FILE *f1,*f2;
	f1=fopen("car.png","rb");
	f2=fopen("copy_car.png","wb+");
	
	if(f1==NULL || f2==NULL)
	{
		printf("File Connection Failed");
		return 1;
	}
	char b[1024];
	unsigned int byteread;
	while(1)
	{
		byteread=fread(b,1,sizeof(b),f1);
		if(byteread==0)
			break;
		fwrite(b,1,sizeof(b),f2);
	}
	
}
