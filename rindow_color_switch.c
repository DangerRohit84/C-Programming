#include<stdio.h>
int main()
{
	char rinbow_code;
	printf("Enter the Rinbow Colors First Letter in capital :");
	scanf("%c",&rinbow_code);
	switch(rinbow_code)
	{
		case 'V':
		case 'v':
			printf("Violet");
			break;
		case 'I':
		case 'i':
			printf("Indigo");
			break;
		case 'B':
		case 'b':
			printf("Blue");
			break;
		case 'G':
		case 'g':
			printf("Green");
			break;
		case 'Y':
		case 'y':
			printf("Yellow");
			break;
		case 'O':
		case 'o':
			printf("Orange");
			break;
		case 'R':
		case 'r':
			printf("Red");
			break;
		default:
			printf("Enter the valid rinbow color code");
	}
}
