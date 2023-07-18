#include <stdio.h>
int main()
{	int a, b, c, d, m, e, t;
	float f;
	printf("MINI CALCULATOR for two numbers \n");
	printf("\nEnter first number \n");
	scanf("%d", &a);
	printf("\nEnter second number \n");
	scanf("%d", &b);
	printf("\nChoose your option (only one)  \n1) Addition \n2) Subtraction \n3) Multiplication \n4) Division  \n5) Modulo  \n");
	scanf("%d", &t);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	m=a%b;
	if(t==1)
	{ printf("\n%d", c);}
	else if(t==2)
	{ printf("\n%d", d);}
	else if(t==3)
	{ printf("\n%d", e);	}
	else if(t==4)
	{ printf("\n%f", f);}
	else if(t==5)
	{ printf("\n%d", m);	}}