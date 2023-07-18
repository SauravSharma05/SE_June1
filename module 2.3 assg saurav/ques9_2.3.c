#include <stdio.h>
#include <string.h>

struct employee
{
	int empno;
	char empname[20];
	char address[50];
	int age;
};
int main()
{
	struct employee e1;
	e1.empno = 105621;
	strcpy(e1.empname , "Rahul");
	strcpy(e1.address , "Tajpalace");
	e1.age = 20;
	
	printf("\n%d", e1.empno);
	printf("\n%s", e1.empname);
	printf("\n%s", e1.address);
	printf("\n%d", e1.age);
}
