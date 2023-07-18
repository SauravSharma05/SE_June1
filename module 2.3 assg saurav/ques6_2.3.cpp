#include <stdio.h>

int main()
{
    int r, c, i, j;
    int M1[20][20], M2[20][20], M[20][20];
    printf("Number of rows  : ");
    scanf("%d", &r);
    printf("Number of columns  : ");
    scanf("%d", &c);
    printf("Matrix 1 : \n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &M1[i][j]);

    printf("\nMatrix 2 : \n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &M2[i][j]);

   printf("\nAddition of M1 and M2 : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            M[i][j] = M1[i][j] + M2[i][j];
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }
    printf("\nSubtraction of M1 and M2 : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            M[i][j] = M1[i][j] - M2[i][j];
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < r; i++) { 									
    for (int j = 0; j < c; j++) { 
      for (int k = 0; k < r; k++) { 
        M[i][j] += M1[i][k] * M2[k][j]; 
      } 
    } 
  } 
  printf("\nMultiplication of M1 and M2 : \n"); 				
  for (int i = 0; i < r; i++) { 
    for (int j = 0; j < c; j++) { 
      printf("%d ", M3[i][j]); 
    } 
    printf("\n"); 
  } 
}