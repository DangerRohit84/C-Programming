#include<stdio.h>
int main()
{
	char i,j,n;
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++)
	{
		int k;
		if(i<=n)
			k=i;
		else
			k=n-i%n;
			
		for(j=1;j<=k;j++)
		
			printf("* ");
			printf("\n");
		
	}
}
//#include<stdio.h>
//int main()
//{
//	char i,j,n;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			
//		 		printf("*");
//		}
//		printf("\n");
//	}
//	 for (i=n-1; i >= 1; i--) {
//        for (j = 1; j <= i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//}
