#include <stdio.h>
int main ()
{	int a,b,c,d,e,f,g,h,i,j; 
  int A[10]= {a,b,c,d,e,f,g,h,i,j};
  printf("\nEnter 10 numbers : \n");
  int k, even=0, odd=0, evens=0, odds=0;
  for(k=0; k<=9; k++)
{	scanf("%d", &A[k]);
	if(A[k]%2==0)
	{	even++;
		evens=evens+ A[k];}
	else
	{		odd++;
		odds=odds+ A[k];}}
			printf("\n");
	printf("\nEven numbers : %d", even);
	printf("\nOdd numbers : %d", odd);
	printf("\nEven numbers sum : %d", evens);
	printf("\nOdd numbers sum : %d", odds);}