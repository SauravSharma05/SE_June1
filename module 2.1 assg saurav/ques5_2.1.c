#include <stdio.h>
int main()
 { int n; 
 printf("LEAP YEAR FINDER	   \n\nEnter Year : \n");
 scanf("%d", &n);
 if(n%4==0)									//condition for checking the leap year
 { printf("\nThis is a Leap Year");}
 else if(n%4!=0)
{ printf("\nNot a Leap Year"); }}