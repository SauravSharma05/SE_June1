#include <stdio.h>

int main()
 {
  int n;
  int A[100];
  printf("Enter numbers : ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) 
  {
    printf("Enter number %d: ", i+1);
    scanf("%d", &A[i]);
  }
  for (int i = 1; i < n; i++) 
  {
    if (A[0] < A[i])
	 {
      A[0] = A[i];
    }
  }
  printf("\nLargest number = %d", A[0]);
}
