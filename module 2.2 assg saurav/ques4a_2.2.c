#include <stdio.h>
int main()
{	int d;
	printf("Enter a day number \n1) Sunday \n2) Monday \n3) Tuesday \n4) Wednesday \n5) Thursday \6) Friday \n7) Saturday \n");
	scanf("%d", &d);
	switch (d)
{	case 1:
	printf("\nSunday");
	break;
	case 2:
	printf("\nMonday");
	break;
	case 3:
	printf("\nTuesday");
	break;
	case 4:
	printf("\nWednesday");
	break;
	case 5:
	printf("\nThursday");
	break;
	case 6:
	printf("\nFriday");
	break;
	case 7:
	printf("\nSaturday");
	break;
	default:
	printf("\nEnter valid number \n");
	break;}	}