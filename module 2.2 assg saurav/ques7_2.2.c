#include <stdio.h>
int main()
{	int n, first=0, second=1, n2;
	printf("Enter number : \n");
	scanf("%d", &n);
	n2= first+second;
	printf("%d %d ", first, second);
	int i;
	for(i=3; i<=n; i++)
	{	printf("%d ", n2);
		first=second;
		second=n2;
		n2=first+second;	}	}				//0 1 1 2 3 5 8 13 ...