/* Declaration
   Program Name : Area of Circle 
   Autor Name : D.Rohit
   Date : 3-10-2024
   Time : 3:30PM
*/

#include<stdio.h>			// Link section
#define PI 3.142			// Definition Section 
void Area();				// Function Prototype
float area;					// Global variable Declaration
int main()					// main function section
{
	int r;					// local variable Declaration
	scanf("%d",&r); 		
	area=PI*r*r;
	Area();
	return 0;	
}
void Area()					// Sub Function section
{
	printf("Area : %.2f",area);
}

					
