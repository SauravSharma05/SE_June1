#include <stdio.h>
int main()
{	float p, r, t, s, a;
	printf("Simple Interest Calculator \n");
	printf("\nEnter Principle Amount : \n");
	scanf("%f", &p);
	printf("Rate : \n");
	scanf("%f", &r);
	printf("Time : \n");
	scanf("%f", &t);
	s=(p*r*t)/100;
	a=p+s;
	printf("\nSimple Interest is %.4f", s);
	printf("\nTotal amount is : %.4f", a);
}
