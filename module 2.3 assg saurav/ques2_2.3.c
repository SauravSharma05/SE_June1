#include <stdio.h>
int main()
{
	float a, b, add, sub, mul, div;
	int n;
	printf("Enter number a : \n");
	scanf("%f", &a);
	printf("\nEnter number b : \n");
	scanf("%f", &b);
	printf("\nSelect \n1) Addition \n2) Subtraction \n3) Multiplication \n4) Division \n");
	scanf("%d", &n);
	switch(n)
	{
		case 1:
		printf("\nAddition is %.f", a+b);
		break;
		case 2:
		printf("\nSubtraction is %.f", a-b);
		break;
		case 3:
		printf("\nMultiplication is %.f", a*b);
		break;
		case 4:
		printf("\nDivision is %.2f", a/b);
		break;
		default:
		printf("\nEnter Valid choice");
		break;
	}
	
}
