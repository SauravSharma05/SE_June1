#include <stdio.h>
int main()
{
	int n, f=1;
	printf("Enter number : \n");			//factorial
	scanf("%d", &n);
	int i;
	
	for(i=1; i<=n; i++)
	{
		f=f*i;
			}
	printf("\n%d", f);}
