#include<stdio.h>
struct student {
	char name[40];
	int rol_no;
	float marks;
};
int main()
{
	int n;
	printf("Enter how many students details to enter: ");
	scanf("%d",&n);
	struct student s[n];
	fflush(stdin);
	for(int i=0;i<n;i++)
	{
		scanf("%s %d %f", s[i].name,&s[i].rol_no,&s[i].marks);
	}
	for(int i=0;i<n;i++)
	{
		printf("\nStudent Details:%d\n",i+1);
		printf("Name: %s\nRoll no: %03d\nMarks: %.2f\n",s[i].name,s[i].rol_no,s[i].marks);
	}
	
	return 0;
}
