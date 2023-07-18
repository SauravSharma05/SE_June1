#include <stdio.h>

int main()
{
    int n, sum=0, n1, n2;
    printf("Enter number : ");
    scanf("%d", &n);
    
    n2 = n % 10;
    while(n >= 10)
    {
        n = n / 10;
    }
    n1 = n;
    sum = n1 + n2;
    printf("Sum of first and last digit : %d", sum);
}