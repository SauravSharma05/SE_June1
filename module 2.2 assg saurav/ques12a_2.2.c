#include <stdio.h>

int main() 
{
  int n;
  printf("Enter no : ");
  scanf("%d",&n);
  printf("\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      if ((i + j) % 2 == 1) printf("0 ");
      else printf("1 ");
    }
    printf("\n");					//odd = 1 and even = 0
  }
}

