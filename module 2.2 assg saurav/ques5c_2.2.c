#include <stdio.h>
int main()
{	int i, j, a, b;
	printf("Enter 1st no : \n");
	scanf("%d", &a);
	printf("Enter 2nd no :  \n");
	scanf("%d", &b);
	
	
	for(i=a; i<=b; i++)
	{
		for(j=1; j<=10; j++)
		{
		
		printf("%d * %d = %d  \n", i,j,a*j);
		
	} printf("\n");
	}
}
