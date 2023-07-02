#include <stdio.h>
int main()
{	int a, b, c, d, e, f, g, h, a1, a2, b1, b2, i;							//declaring variables 
		
	for(i=1; i>=1; i++)														//using for loop to run the program again
		{
		printf("\t\t\tMatrix Multiplicaton \n\n");
		printf("* * * * MATRIX 1 * * * *  \n\nEnter element values : ");
		printf("\nelement A : ");
		scanf("%d", &a);													//scanning variable for Input
		printf("element B : ");
		scanf("%d", &b);
		printf("element C : ");
		scanf("%d", &c);
		printf("element D : ");
		scanf("%d", &d);
		printf("\n%d\t%d\n%d\t%d", a,b,c,d);								//printing variables
		
		printf("\n\n* * * * MATRIX 2 * * * *  \n\nEnter element values : ");
		printf("\nelement E : ");
		scanf("%d", &e);
		printf("element F : ");
		scanf("%d", &f);
		printf("element G : ");
		scanf("%d", &g);
		printf("element H : ");
		scanf("%d", &h);
		printf("\n%d\t%d\n%d\t%d", e,f,g,h);
		
		printf("\n\n* * * * Multiplication of Both Matrix 1 and 2 * * * *\n\n");
		a1=(a*e)+(b*g);													
		a2=(a*f)+(b*h);														//using matrix multiplication logic to print multiplied matrix in 2x2 form
		b1=(c*e)+(d*g);
		b2=(c*f)+(d*h);
		printf("\n%d\t%d\n%d\t%d", a1,a2,b1,b2);
		printf("\n\n* * * * End * * * *  ");
	}
		
		
}
