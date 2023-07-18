#include <stdio.h>
int main()
{	char c;
	printf("Enter a alphabet \n");
	scanf("%c", &c);
	switch (c)
{	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	printf("\nIt is Vowel");
	break;
	default:
	printf("\nIt is consonant \n");
	break;}	}