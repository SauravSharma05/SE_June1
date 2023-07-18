#include <stdio.h>
#include <string.h>

struct employee
{
	int empno;						// STRUCTURE SHOWS THE SUM OF ALL VALUES
//	char empname[20];
//	char address[50];
	int age;
};

union employer						// UNION SHOWS THE HIGHEST VALUE 
{
	int empno;
//	char empname[20];
//	char address[50];
	int age;
};


int main()
{
	struct e1;
	union e11;
	
	struct employee a;
	union employer b;
    printf("Size of struct employee: %ld\n", sizeof(struct employee));
    
    printf("\nSize of union employee: %ld\n", sizeof(union employer));
    
}
