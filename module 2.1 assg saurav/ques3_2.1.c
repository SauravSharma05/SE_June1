#include <stdio.h>
int main()
{	float l, b, h, base, at, r, ar, ac;
	
	printf("AREA CALCULATOR GAME  \n");
	printf("\nEnter length of shape :  \n");
	scanf("%f", &l);
	printf("\nEnter breadth of shape :  \n");
	scanf("%f", &b);
	printf("\nEnter radius of shape :  \n");
	scanf("%f", &r);
	printf("\nEnter base of shape :  \n");
	scanf("%f", &base);
	printf("\nEnter height of shape :  \n");
	scanf("%f", &h);
	at=(l/2)*base*h;
	ar=l*b;
	ac=(3.14*r*r);
	
	printf("\nArea of Triangle is %f sq unit", at);
	printf("\nArea of Rectangle is %.2f sq unit", ar);
	printf("\nArea of Circle is %.4f sq unit", ac);}