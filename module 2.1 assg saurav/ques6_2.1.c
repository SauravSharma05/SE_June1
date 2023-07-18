#include <stdio.h>
int main()
 { int n;
 float y, d, yd, dy;
 	printf("year days convertor \n\n1) Year to Days  \n2) Days to Year  \n");
 	scanf("%d", &n);
 	if(n==1)
	{	printf("\nEnter Year \n");
		scanf("%f", &y);
		yd=y*365;
		printf("\nDays is %f", yd);	}
	else 	if(n==2)
	{	printf("\nEnter Days \n");
		scanf("%f", &d);
		dy=d/365;
		printf("\nYear is %f", dy);	}
	else {	printf("\nEnter valid Input");	}}