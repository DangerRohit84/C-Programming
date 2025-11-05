#include<stdio.h>
struct student {
	char name[40];
	int rol_no;
	float marks;
};
int main()
{
	struct student s;
	printf("Enter your name: ");
	scanf("%[^\n]s", s.name);
	printf("Enter your roll number: ");
	scanf("%d",&s.rol_no);
	printf("Enter your marks: ");
	scanf("%f",&s.marks);
	printf("Hello! %s Your Roll number is %.03d and Your Marks is %.2f",s.name,s.rol_no,s.marks);
	return 0;
}
