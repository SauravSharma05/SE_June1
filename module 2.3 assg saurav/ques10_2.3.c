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
	
	struct employee e2;
	e2.empno = 105645;
	strcpy(e2.empname , "Samir");
	strcpy(e2.address , "Roshanpur");
	e2.age = 40;
	
	struct employee e3;
	e3.empno = 105678;
	strcpy(e3.empname , "Suresh");
	strcpy(e3.address , "Nauvlakha");
	e3.age = 32;
	
	struct employee e4;
	e4.empno = 105661;
	strcpy(e4.empname , "Rohan");
	strcpy(e4.address , "Maninagar");
	e4.age = 28;
	
	struct employee e5;
	e5.empno = 105688;
	strcpy(e5.empname , "Vikas");
	strcpy(e5.address , "Patel Nagar");
	e5.age = 30;
	
	printf("\nEmployee 1 : ");
	printf("\n%d", e1.empno);
	printf("\n%s", e1.empname);
	printf("\n%s", e1.address);
	printf("\n%d", e1.age);
	
	printf("\n\nEmployee 2 : ");
	printf("\n%d", e2.empno);
	printf("\n%s", e2.empname);
	printf("\n%s", e2.address);
	printf("\n%d", e2.age);
	
	printf("\n\nEmployee 3 : ");
	printf("\n%d", e3.empno);
	printf("\n%s", e3.empname);
	printf("\n%s", e3.address);
	printf("\n%d", e3.age);
	
	printf("\n\nEmployee 4 : ");
	printf("\n%d", e4.empno);
	printf("\n%s", e4.empname);
	printf("\n%s", e4.address);
	printf("\n%d", e4.age);
	
	printf("\n\nEmployee 5 : ");
	printf("\n%d", e5.empno);
	printf("\n%s", e5.empname);
	printf("\n%s", e5.address);
	printf("\n%d", e5.age);
}
