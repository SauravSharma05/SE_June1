#include <stdio.h> 
 int main() 
 {  int a1, a2, b1, b2, c1, c2, d1, d2, i, j, k;
 	printf("\t\t* * * Matrix Multiplication * * *  \n\n");				//initializing variables and entering values in matrix 1
 	printf("\nEnter 1st matrix elements : \nEnter Elements : ");
 	scanf("%d", &a1);
 	printf("Enter Elements : ");
 	scanf("%d", &b1);
 	printf("Enter Elements : ");
 	scanf("%d", &a2);
 	printf("Enter Elements : ");
 	scanf("%d", &b2);
 	printf("\n");
 
  	int M1[2][2] = {{a1, b1}, {a2, b2}}; 								//Printing the matrix 1 usinf for loop
 	for(i=0; i<2; i++)
 	{
 		for(j=0; j<2; j++)
 		{
 			printf(" %d ", M1[i][j]);
		 }
		 printf("\n");
	 }
  	printf("\n* * * * * *  \n\nEnter 2nd matrix elements : \nEnter Elements : ");		//initializing variables and entering values in matrix 2
 	scanf("%d", &c1);
 	printf("Enter Elements : ");
 	scanf("%d", &d1);
 	printf("Enter Elements : ");
 	scanf("%d", &c2);
 	printf("Enter Elements : ");
 	scanf("%d", &d2);
 	printf("\n");
  
  	int M2[2][2] = {{c1, d1}, {c2, d2}}; 									//printing 2nd matrix using for loop
  		for(i=0; i<2; i++)
 	{
 		for(j=0; j<2; j++)
 		{
 			printf(" %d ", M2[i][j]);
		 }
		 printf("\n");
	 }
	 int Matrix(int M[2][2]); 

  int M[2][2] = {0}; 
  
    for (int i = 0; i < 2; i++) { 										//multiplying the both matrix and forming a new matrix M
    for (int j = 0; j < 2; j++) { 
      for (int k = 0; k < 2; k++) { 
        M[i][j] += M1[i][k] * M2[k][j]; 
      } 
    } 
  } 
  
  printf("\n* * * * *\n\nResult : Multiplication of 2x2 Matrix : \n"); 				//printing the new matrix using for loop
  for (int i = 0; i < 2; i++) { 
    for (int j = 0; j < 2; j++) { 
      printf("%d ", M[i][j]); 
    } 
    printf("\n"); 
  } 
} 